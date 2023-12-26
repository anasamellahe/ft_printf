/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 04:59:25 by anamella          #+#    #+#             */
/*   Updated: 2023/12/26 20:38:43 by anamella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_forma	*set_forma(void)
{
	static t_forma	forma[10];

	forma[0].format = 'd';
	forma[0].f = &print_dec;
	forma[1].format = 'i';
	forma[1].f = &print_dec;
	forma[2].format = 's';
	forma[2].f = &ft_print_str;
	forma[3].format = 'x';
	forma[3].f = &print_x;
	forma[4].format = 'X';
	forma[4].f = &print_xu;
	forma[5].format = 'u';
	forma[5].f = &print_u;
	forma[6].format = 'p';
	forma[6].f = &print_p;
	forma[7].format = 'c';
	forma[7].f = &ft_print_char;
	forma[8].format = '%';
	forma[8].f = &ft_print_per;
	forma[9].f = NULL;
	return (forma);
}

t_flag	*set_flag(void)
{
	static t_flag	flag[5];

	flag[0].flag = '-';
	flag[0].bool_flag = 0;
	flag[1].flag = '+';
	flag[1].bool_flag = 0;
	flag[2].flag = '0';
	flag[2].bool_flag = 0;
	flag[3].flag = '#';
	flag[3].bool_flag = 0;
	flag[4].flag = ' ';
	flag[4].bool_flag = 0;
	return (flag);
}

int	set_param(void **param, va_list ap)
{
	void	*flag_forma[2];
	int		size[2];

	flag_forma[0] = set_forma();
	flag_forma[1] = set_flag();
	size[0] = -1;
	size[1] = -1;
	return (get_forma(param, ap, flag_forma, size));
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	void	*param[3];
	int		len;
	int		i;

	va_start(ap, s);
	param[0] = (char *)s;
	param[1] = &i;
	param[2] = &len;
	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			(*(t_i)param[1])++;
			if (set_param(param, ap))
				(*(t_i)param[1])++;
		}
		else
			ft_putcchar(s[i++], &len);
	}
	va_end(ap);
	return (len);
}

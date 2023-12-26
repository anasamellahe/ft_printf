/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_forma.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 03:52:19 by anamella          #+#    #+#             */
/*   Updated: 2023/12/26 20:40:11 by anamella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	g_flg(char c, t_flag *flag)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (flag[i].flag == c)
		{
			flag[i].bool_flag = 1;
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_my_atoi(char *s, int *i)
{
	int	nbr;

	nbr = 0;
	if (s[*i] == '.')
		(*i)++;
	while (s[*i] >= '0' && s[*i] <= '9')
	{
		nbr = nbr * 10 + (s[*i] - '0');
		(*i)++;
	}
	return (nbr);
}

int	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check(char c)
{
	int		i;
	char	*s;

	i = 0;
	s = "00123456789-+ #.";
	while (s[i])
	{
		if (c == s[i])
			return (0);
		i++;
	}
	return (1);
}

int	get_forma(void **p, va_list ap, void **f, int *size)
{
	int	j;
	int	*len;

	len = (t_i)p[2];
	while (((t_c)p[0])[*(t_i)p[1]])
	{
		g_flg(((t_c)p[0])[*(t_i)p[1]], (t_l)f[1]);
		if (ft_isnumber(((t_c)p[0])[*(t_i)p[1]])
			&& ((t_c)p[0])[*(t_i)p[1]] != '0')
			size[0] = ft_my_atoi((t_c)p[0], (t_i)p[1]);
		if (((t_c)p[0])[*(t_i)p[1]] == '.')
			size[1] = ft_my_atoi((t_c)p[0], (t_i)p[1]);
		j = 0;
		while (((t_f)f[0])[j].f)
		{
			if (((t_f)f[0])[j].format == ((t_c)p[0])[*(t_i)p[1]])
				return (((t_f)f[0])[j].f(ap, len, (t_l)f[1], size));
			j++;
		}
		if (check(((t_c)p[0])[*(t_i)p[1]]))
			return (0);
		(*(t_i)p[1])++;
	}
	return (0);
}

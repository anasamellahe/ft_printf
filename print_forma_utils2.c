/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_forma_utils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:33:51 by anamella          #+#    #+#             */
/*   Updated: 2023/12/26 21:13:53 by anamella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set_s(va_list ap)
{
	char	*s;

	s = va_arg(ap, char *);
	if (s != NULL)
		return (s);
	else
		return ("(null)");
	return (0);
}

void	ft_putcchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

int	count_width(t_flag *flag, long int nbr, int *size, char type)
{
	int	count;
	int	c;
	
	printf("size[0] == %d size[1] == %d\n", size[0], size[1]);
	c = ft_count(((nbr > 0) - (nbr < 0)) * nbr, type);
	count = 0;
	if ((flag[1].bool_flag || nbr < 0) && !(type == 'x' || type == 'X')
		&& ((((nbr > 0) - (nbr < 0)) * nbr) > 0 || size[1] > 0))
		count++;
	if (flag[3].bool_flag && (type == 'x' || type == 'X')
		&& ((((nbr > 0) - (nbr < 0)) * nbr) > 0 || size[1] > 0))
		count += 2;
	if (size[1] > c && (nbr > 0 || size[1] > 0))
		count += size[1];
	if (size[1] <= c && (((nbr > 0) + (nbr < 0))
			* nbr > 0 || size[1] > 0 || size[1] == -1))
		count += c;
	if (type == 'p')
		count += 2;
	printf("count == %d\n", count);
	return (count);
}

void	print_sign(t_flag *flag, int *len, long int nbr, char type)
{
	if (nbr >= 0 && flag[4].bool_flag && !flag[1].bool_flag)
		ft_putcchar(' ', len);
	if (flag[1].bool_flag && nbr >= 0 && type != 'x' && type != 'X')
		ft_putcchar('+', len);
	if (nbr < 0 && (type != 'x' || type != 'X') && type != 'p')
		ft_putcchar('-', len);
	if (nbr > 0 && flag[3].bool_flag && (type == 'X' || type == 'x'))
	{
		ft_putcchar('0', len);
		ft_putcchar(type, len);
	}
	if (type == 'p')
	{
		ft_putcchar('0', len);
		ft_putcchar('x', len);
	}
}

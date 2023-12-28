/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_forma.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:04:54 by anamella          #+#    #+#             */
/*   Updated: 2023/12/27 12:49:18 by anamella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_dec(va_list ap, int *len, t_flag *flag, int *size)
{
	long int	nbr;

	nbr = va_arg(ap, int);
	*len += print_forma(flag, nbr, size, 'd');
	return (1);
}

int	print_u(va_list ap, int *len, t_flag *flag, int *size)
{
	long int	nbr;

	nbr = va_arg(ap, unsigned int);
	*len += print_forma(flag, nbr, size, 'u');
	return (1);
}

int	print_x(va_list ap, int *len, t_flag *flag, int *size)
{
	long int	nbr;

	nbr = va_arg(ap, unsigned int);
	*len += print_forma(flag, nbr, size, 'x');
	return (1);
}

int	print_xu(va_list ap, int *len, t_flag *flag, int *size)
{
	long int	nbr;

	nbr = va_arg(ap, unsigned int);
	*len += print_forma(flag, nbr, size, 'X');
	return (1);
}

int	ft_print_per(va_list ap, int *len, t_flag *flag, int *size)
{
	char	c;

	(void)ap;
	c = '%';
	size[0] -= 1;
	if (flag[0].bool_flag)
	{
		ft_putcchar(c, len);
		ft_print_width(&size[0], len, ' ');
	}
	else
	{
		ft_print_width(&size[0], len, (' ' * !flag[2].bool_flag) + ('0'
				* flag[2].bool_flag));
		ft_putcchar(c, len);
	}
	return (1);
}

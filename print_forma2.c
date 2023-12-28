/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_forma2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:16:27 by anamella          #+#    #+#             */
/*   Updated: 2023/12/27 13:13:05 by anamella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(va_list ap, int *len, t_flag *flag, int *size)
{
	char	c;

	c = va_arg(ap, int);
	size[0] -= 1;
	if (flag[0].bool_flag)
	{
		ft_putcchar(c, len);
		ft_print_width(&size[0], len, ' ');
	}
	else
	{
		ft_print_width(&size[0], len, (' ' * (flag[2].bool_flag == 0)) + ('0'
				* (flag[2].bool_flag != 0)));
		ft_putcchar(c, len);
	}
	return (1);
}

int	print_p(va_list ap, int *len, t_flag *flag, int *size)
{
	size_t	nbr;
	int		c;

	nbr = (size_t)va_arg(ap, void *);
	c = ft_count(nbr, 'p');
	size[0] -= c + 2;
	if (flag[0].bool_flag || (flag[2].bool_flag && (size[1] == -1)))
		print_sign(flag, len, nbr, 'p');
	if ((flag[2].bool_flag && !flag[0].bool_flag) || (!flag[2].bool_flag
			&& !flag[0].bool_flag))
		ft_print_width(&size[0], len, (' ' * !(flag[2].bool_flag * (size[1]
						== -1))) + ('0' * (flag[2].bool_flag * (size[1]
						== -1))));
	if ((!flag[2].bool_flag || size[1] != -1) && !flag[0].bool_flag)
		print_sign(flag, len, nbr, 'p');
	ft_print_precision(c, &size[1], len, 'p');
	ft_putnbr(nbr, len, 'p');
	if (flag[0].bool_flag)
		ft_print_width(&size[0], len, ' ');
	return (1);
}

int	ft_print_str(va_list ap, int *len, t_flag *flag, int *size)
{
	char	*s;
	int		i;
	int		l;

	i = 0;
	s = set_s(ap);
	l = ft_strlen(s);
	size[0] -= (l * (size[1] >= l || size[1] == -1)) + ((size[1] < l
				&& size[1] != -1) * size[1]);
	if (s != NULL && flag[0].bool_flag)
	{
		while (i < (size[1] * (size[1] != -1) + (l * (size[1] == -1))) && s[i])
			ft_putcchar(s[i++], len);
		while (0 < size[0]--)
			ft_putcchar(' ', len);
	}
	else if (s != NULL)
	{
		while (0 < size[0]--)
			ft_putcchar((' ' * !(flag[2].bool_flag * (size[1] == -1))) + ('0'
					* (flag[2].bool_flag * (size[1] == -1))), len);
		while (i < (size[1] * (size[1] != -1) + (l * (size[1] == -1))) && s[i])
			ft_putcchar(s[i++], len);
	}
	return (1);
}

int	print_forma(t_flag *flag, long int nbr, int *size, char type)
{
	int	c;
	int	len;

	len = 0;
	c = ft_count(((nbr > 0) - (nbr < 0)) * nbr, type);
	size[0] -= count_width(flag, nbr, size, type);
	if (flag[0].bool_flag || (flag[2].bool_flag && (size[1] == -1)))
		print_sign(flag, &len, nbr, type);
	if ((flag[2].bool_flag && !flag[0].bool_flag) || (!flag[2].bool_flag
			&& !flag[0].bool_flag))
		ft_print_width(&size[0], &len, (' ' * !(flag[2].bool_flag * (size[1]
						== -1))) + ('0' * (flag[2].bool_flag * (size[1]
						== -1))));
	if ((!flag[2].bool_flag || size[1] != -1) && !flag[0].bool_flag)
		print_sign(flag, &len, nbr, type);
	ft_print_precision(c, &size[1], &len, type);
	if (!(nbr == 0 && size[1] == 0))
		ft_putnbr(((nbr > 0) - (nbr < 0)) * nbr, &len, type);
	if (flag[0].bool_flag)
		ft_print_width(&size[0], &len, ' ');
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_forma_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:19:03 by anamella          #+#    #+#             */
/*   Updated: 2023/12/26 12:37:03 by anamella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s != NULL && s[i])
		i++;
	return (i);
}

void	ft_putnbr(size_t nbr, int *len, char type)
{
	char	*s;
	size_t	base;

	base = 16;
	if (type == 'x' || type == 'p')
		s = "0123456789abcdef";
	else if (type == 'X')
		s = "0123456789ABCDEF";
	else
	{
		base = 10;
		s = "0123456789";
	}
	if (nbr >= base)
		ft_putnbr(nbr / base, len, type);
	ft_putcchar(s[nbr % base], len);
}

int	ft_count(size_t n, char type)
{
	int		count;
	size_t	base;

	count = 1;
	base = 16;
	if ((type == 'd' || type == 'i' || type == 'u'))
		base = 10;
	{
		while (n >= base)
		{
			n = n / base;
			count++;
		}
	}
	return (count);
}

void	ft_print_width(int *width, int *len, char c)
{
	while (*width > 0)
	{
		ft_putcchar(c, len);
		(*width)--;
	}
}

void	ft_print_precision(int count, int *precision, int *len, char type)
{
	(void)type;
	while (*precision > count)
	{
		ft_putcchar('0', len);
		(*precision)--;
	}
}

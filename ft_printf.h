/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 04:59:15 by anamella          #+#    #+#             */
/*   Updated: 2023/12/28 21:31:56 by anamella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_flag
{
	char			flag;
	int				bool_flag;
}					t_flag;

typedef struct s_forma
{
	char			format;
	int				(*f)(va_list, int *, t_flag *, int *);
}					t_forma;

typedef long int	*t_lo;
typedef int			*t_i;
typedef char		*t_c;
typedef t_flag		*t_l;
typedef t_forma		*t_f;

t_forma				*set_forma(void);
t_flag				*set_flag(void);
int					ft_printf(const char *s, ...);
int					g_flg(char c, t_flag *flag);
int					get_forma(void **param, va_list ap, void **flag_forma,
						int *size);
int					ft_isnumber(char c);

void				print_sign(t_flag *flag, int *len, long int nbr, char type);
int					set_param(void **param, va_list ap);
int					print_forma(t_flag *flag, long int nbr, int *size,
						char type);

int					print_dec(va_list ap, int *len, t_flag *flag, int *size);
int					print_x(va_list ap, int *len, t_flag *flag, int *size);
int					print_xu(va_list ap, int *len, t_flag *flag, int *size);
int					print_u(va_list ap, int *len, t_flag *flag, int *size);
int					ft_print_str(va_list ap, int *len, t_flag *flag,
						int *size);
int					print_p(va_list ap, int *len, t_flag *flag, int *size);
int					ft_print_char(va_list ap, int *len, t_flag *flag,
						int *size);
int					ft_print_per(va_list ap, int *len, t_flag *flag, int *size);

void				ft_putnbr(size_t nbr, int *len, char type);
void				ft_putcchar(char c, int *len);
void				ft_print_width(int *width, int *len, char c);
void				ft_print_precision(int count, int *precision, int *len,
						char type);
int					ft_my_atoi(char *s, int *i);
int					ft_count(size_t n, char type);
int					ft_strlen(char *s);
char				*set_s(va_list ap);
int					check(char c);
int					count_width(t_flag *flag, long int nbr, int *size,
						char type);

#endif

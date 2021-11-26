/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:35:43 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/25 13:41:42 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct iteriiiii
{
	int	i;
	int	j;
}		t_iter;

typedef struct putnbrnum
{
	signed long long	nbr;
	signed long long	res;
}	t_list;

int			ft_putchar(char c);
int			ft_putstr(char *str);
int			_printer(const char format, va_list vl);
int			ft_putchar_fd(char c, int fd);
int			ft_printf(const char *format, ...);
size_t		ft_putnbr_base(size_t nbr, char *base);
size_t		ft_strlen(const char *str);
int			__p(unsigned long nbr);
int			ft_putnbr_mod(long long nbr, char *base);
long		ft_putnbr(int nb);

#endif

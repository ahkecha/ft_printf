/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:23:10 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/26 11:40:06 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	_printer(const char format, va_list vl)
{
	int	ret;

	ret = 0;
	if (format == 'd' || format == 'i')
		ret += ft_putnbr(va_arg(vl, int));
	else if (format == 's')
		ret += ft_putstr(va_arg(vl, char *));
	else if (format == 'c')
		ret += ft_putchar_fd(va_arg(vl, int), 1);
	else if (format == 'u')
		ret += ft_putnbr_base(va_arg(vl, unsigned int), "0123456789");
	else if (format == 'X')
		ret += ft_putnbr_base(va_arg(vl, unsigned int), "0123456789ABCDEF");
	else if (format == 'x')
		ret += ft_putnbr_base(va_arg(vl, unsigned int), "0123456789abcdef");
	else if (format == 'p')
		ret += __p(va_arg(vl, unsigned long));
	else
		ret += ft_putchar_fd('%', 1);
	return (ret);
}

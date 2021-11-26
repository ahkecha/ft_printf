/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:35:40 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/25 11:38:57 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	t_iter	var;
	va_list	vl;

	var.i = 0;
	var.j = 0;
	va_start(vl, format);
	while (format[var.i])
	{
		if (format[var.i] == '%')
		{
			var.i++;
			var.j += _printer(format[var.i], vl);
		}
		else
		{
			var.j += ft_putchar_fd(format[var.i], 1);
		}
		var.i++;
	}
	va_end(vl);
	return (var.j);
}

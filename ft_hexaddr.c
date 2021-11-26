/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahkecha <ahkecha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:21:58 by ahkecha           #+#    #+#             */
/*   Updated: 2021/11/26 11:42:04 by ahkecha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base(size_t nbr, char *base)
{
	int	res;

	res = 0;
	if (nbr >= ft_strlen(base))
	{
		res += ft_putnbr_base(nbr / ft_strlen(base), base);
		res += ft_putnbr_base(nbr % ft_strlen(base), base);
	}
	else
		res += ft_putchar(base[nbr]);
	return (res);
}

long	ft_putnbr(int nb)
{
	t_list	var;

	var.nbr = nb;
	var.res = 0;
	if (var.nbr < 0)
	{
		var.res += ft_putchar('-');
		var.nbr *= -1;
	}
	if (nb == 0)
		var.res += ft_putchar('0');
	if (var.nbr > 0)
	{
		if (var.nbr >= 10)
		{
			var.res += ft_putnbr(var.nbr / 10);
			var.res += ft_putchar((var.nbr % 10) + 48);
		}
		else
			var.res += ft_putchar(var.nbr + 48);
	}
	return (var.res);
}

int	__p(unsigned long nbr)
{
	int	addr;

	addr = 0;
	addr += ft_printf("%s", "0x");
	addr += ft_putnbr_base(nbr, "0123456789abcdef");
	return (addr);
}

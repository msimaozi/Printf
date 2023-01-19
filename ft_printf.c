/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:16:46 by msimaozi          #+#    #+#             */
/*   Updated: 2022/12/13 14:16:48 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_tipo(va_list ap, const char tipo)
{
	if (tipo == 'c')
		return (ft_char(va_arg(ap, int)));
	else if (tipo == 's')
		return (ft_str(va_arg(ap, char *)));
	else if (tipo == 'd' || tipo == 'i')
		return (ft_int(va_arg(ap, int)));
	else if (tipo == 'u')
		return (ft_un(va_arg(ap, unsigned int)));
	else if (tipo == 'x')
		return (ft_hexa(va_arg(ap, unsigned int), tipo));
	else if (tipo == 'X')
		return (ft_hexa(va_arg(ap, unsigned int), tipo));
	else if (tipo == 'p')
		return (ft_pot(va_arg(ap, unsigned long long)));
	else if (tipo == '%')
		return (ft_char('%'));
	return (0);
}

int	ft_printf(const char *tipo, ...)
{
	int		x;
	int		y;
	va_list	ap;

	x = 0;
	y = 0;
	va_start(ap, tipo);
	while (tipo[x])
	{
		if (tipo[x] == '%')
		{
			y = y + ft_tipo(ap, tipo[x + 1]);
			x++;
		}
		else
			y = y + ft_char(tipo[x]);
		x++;
	}
	va_end(ap);
	return (y);
}

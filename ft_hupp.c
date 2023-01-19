/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hupp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:42:35 by msimaozi          #+#    #+#             */
/*   Updated: 2023/01/04 10:42:36 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_un(unsigned int ap)
{
	int	x;

	x = 0;
	if (ap >= 10)
	{
		x = x + ft_un(ap / 10);
		ap = ap % 10;
	}
	if (ap < 10)
		x = x + ft_char(ap + 48);
	return (x);
}

int	ft_hexa(unsigned int ap, const char tipo)
{
	if (ap == 0)
		return (ft_char('0'));
	else if (ap >= 16)
	{
		ft_hexa(ap / 16, tipo);
		ft_hexa(ap % 16, tipo);
	}
	else
	{		
		if (ap <= 9)
			ft_char(ap + 48);
		else
		{
			if (tipo == 'x')
				ft_char((ap - 10) + 'a');
			else if (tipo == 'X')
				ft_char((ap - 10) + 'A');
		}
	}
	return (ft_c_hexa(ap));
}

int	ft_point(uintptr_t ap)
{
	if (ap >= 16)
	{
		ft_point(ap / 16);
		ft_point(ap % 16);
	}
	else
	{
		if (ap <= 9)
			ft_char(ap + 48);
		else
			ft_char(ap - 10 + 'a');
	}
	return (1);
}

int	ft_pot(unsigned long long ap)
{
	int	x;

	if (ap == 0)
		return (ft_str("(nil)"));
	else
	{
		x = ft_str("0x");
		ft_point(ap);
	}
	return (x = x + ft_c_hexa(ap));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_csi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:38:33 by msimaozi          #+#    #+#             */
/*   Updated: 2023/01/04 10:38:36 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(char ap)
{
	write (1, &ap, 1);
	return (1);
}

int	ft_str(char *ap)
{
	int	x;

	x = 0;
	if (ap == NULL)
		return (write(1, "(null)", 6));
	while (ap[x] != '\0')
	{
		write(1, &ap[x], 1);
		x++;
	}
	return (x);
}

int	ft_int(int ap)
{
	int	x;

	x = ft_c(ap);
	if (ap == -2147483648)
	{
		ft_char('-');
		ft_char('2');
		ap = 147483648;
	}
	if (ap < 0)
	{
		ft_char('-');
		ap = -ap;
	}
	if (ap >= 10)
	{
		ft_int(ap / 10);
		ap = ap % 10;
	}
	if (ap < 10)
		ft_char(ap + '0');
	return (x);
}

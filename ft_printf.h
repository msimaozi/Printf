/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:32:45 by msimaozi          #+#    #+#             */
/*   Updated: 2022/12/13 14:32:46 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include<string.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdint.h>
# include<stdarg.h>

int	ft_printf(const char *tipo, ...);
int	ft_tipo(va_list ap, const char tipo);
int	ft_char(char ap);
int	ft_c(int ap);
int	ft_c_hexa(uintptr_t ap);
int	ft_str(char *ap);
int	ft_int(int ap);
int	ft_un(unsigned int ap);
int	ft_hexa(unsigned int ap, const char tipo);
int	ft_point(uintptr_t ap);
int	ft_pot(unsigned long long ap);

#endif

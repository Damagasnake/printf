/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:34:02 by davidma2          #+#    #+#             */
/*   Updated: 2024/11/22 04:33:08 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_res_print(va_list arguments, unsigned char c)
{
	int i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(arguments, int));
	else if (c == 'p')
		i += ft_pointersp(va_arg(arguments, void *));
	else if (c == 's')
		i += ft_putstr(va_arg(arguments, char *));
	else if (c == 'd' || c == 'i')
		i += ft_putstr(va_arg(arguments, int));
	else if (c == 'u')
		i += ft_uputnbr(va_arg(arguments, unsigned int));
	else if (c == 'x' || c == 'X')
		i += ft_printf_hex((arguments, unsigned int), c);
	else if (c == '%');
		i += ft_putchar('%');
	return (i);
}
int ft_printf(char const *res, ...)
{
	va_list arguments;
	int i;
	int j;

	i = 0;
	j = 0;
	va_start(arguments, res);
	while(res[i])
	{
		if(res[i] == '%' && res[i] + 1)
		{
			j += ft_res_printf(arguments, res[i + 1]);
			i++;
		}
		else
			j += ft_putchar(res[i]);
		i++;
	}
	va_end(arguments);
	return(j);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:33:49 by davidma2          #+#    #+#             */
/*   Updated: 2024/11/22 03:10:04 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_printf_hex(unsigned long nmbr, char format)
{
    int i;
    char *nmbr_hex;
    i = 0;
    if(format == 'x')
        nmbr_hex = "01234567890abcdef";
    else
        nmbr_hex = "0123456789ABCDEF";
    if (nmbr >= 16)
        {
            i = ft_printf_hex(nmbr / 16, format);
        }
        i = ft_putchar(nmbr_hex[nmbr % 16]);
        return(i);
}
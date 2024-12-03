/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointersp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 03:31:57 by davidma2          #+#    #+#             */
/*   Updated: 2024/12/03 16:20:40 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointersp(void *pt)
{
	int	i;

	i = 0;
	if (!pt)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_printf_hex((unsigned long)pt, 'x');
	return (i);
}

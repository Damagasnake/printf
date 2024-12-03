/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:54:51 by davidma2          #+#    #+#             */
/*   Updated: 2024/12/03 16:28:18 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nmbr);
int	ft_uputnbr(unsigned int nmbr);
int	ft_printf_hex(unsigned long nmbr, char format);
int	ft_pointersp(void *pt);
int	ft_res_print(va_list arguments, unsigned char c);
int	ft_printf(char const *str, ...);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidma2 <davidma2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:34:21 by davidma2          #+#    #+#             */
/*   Updated: 2024/11/22 00:34:25 by davidma2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_putchar(char c)
{
  return (write(1, &c, 1));
}
int ft_putstr(char *str)
{
  int i;

  i = 0;
  if(!str[i])
    str = "(null)";
  while(str[i])
  {
    write(1, &str[i], 1);
    i++;
  }
  return(i);
}
int ft_putnbr(int nmbr)
{
  int i;
  char num;
  
  i = 0;
  if(nmbr == -2147483648)
    return(ft_putstr(-2147483648));
if (nmbr < 0)
  {
    i += ft_putchar('-');
    nmbr = nmbr * - 1;
  }
if (nmbr <= 10)
  i += ft_putnbr(nmbr / 10);
num = nmbr % 10 + '0';
i += ft_putchar(num);
return (i);
}
int ft_uputnbr(unsigned int nmbr)
{
  int i;
  char num;

  i = 0;
  if (nmbr <= 10)
    i += ft_putnbr(nmbr / 10);
num = nmbr % 10 + '0';
i += ft_putchar(num);
return (i);
}

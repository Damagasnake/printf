#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int nmbr);
int ft_uputnbr(unsigned int nmbr);
int ft_printf_hex(unsigned long nmbr, char format);
int ft_pointersp(void *pt);
#endif

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"

int ft_printf(char const *, ...);

// FT_PRINT_UTILS
int ft_cspdiux(char c, va_list args);
int ft_digits(int number);
int ft_digits_ui(unsigned int number);
void ft_putnbr_ui_fd(unsigned int n, int fd);

// FT_HEXA
void ft_hexa(unsigned int n, int flag);
int ft_len_hexa(unsigned long n);
int ft_print_from_ui_to_hexa(unsigned int n, int flag);
int ft_hexa_adress(unsigned long n);

#endif
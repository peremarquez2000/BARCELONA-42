#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include "libft.h"

int     ft_printf(char const *, ...);

//FT_PRINT_UTILS
void    ft_cspdiux(char c, va_list args);

//FT_HEXA
void    ft_hexa(unsigned int n, int flag);
int     ft_len_hexa(unsigned long n);
void    ft_print_from_ui_to_hexa(unsigned int n, int flag);
void	ft_hexa_adress(unsigned long n);


//FT_PUTNBR_UI
void	ft_putnbr_ui_fd(unsigned int n, int fd);

#endif
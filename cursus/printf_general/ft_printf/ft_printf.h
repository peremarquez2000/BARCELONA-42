#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include "libft.h"

int ft_printf(char const *, ...);
void ft_cspdiux(char c, va_list args);
#endif
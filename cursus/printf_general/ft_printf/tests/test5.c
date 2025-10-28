#include "../ft_printf.h"
int main()
{
    int a = 2147483647;

    ft_printf("\n\nNumber of return FT:%d\n\n",ft_printf("%d",a));
    printf("\n\nNumber of return NO FT:%d\n\n",printf("%d",a));
}
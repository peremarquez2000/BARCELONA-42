#include "../ft_printf.h"
int main()
{
    int a = 5;
    printf("\nNUMBER OF BITS:%d",printf("%p",&a));
    printf("\n\n\n");
    printf("\nNUMBER OF BITS:%d",ft_printf("%p",&a));

}
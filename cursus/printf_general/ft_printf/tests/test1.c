#include "../ft_printf.h"
int main()
{
    char *s = NULL;
    char *t = NULL;
    char *st = "a";
    printf("%d",ft_printf("%s",s));
    printf("\n");
    printf("%d",ft_printf("%s",t));
    printf("\n");
    printf("%d",ft_printf("%s",st));
}
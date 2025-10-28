#include "../ft_printf.h"
int main()
{
/*      Expected: [0x7ffeb6bd6604], return: 14
        Got:      [0x007ffeb6bd6604], return: 14 */
    unsigned long ul= 140731964286468;
    // ul= 54;
    ft_hexa_adress(ul);
    // printf("hexa = %lx", ul);
}
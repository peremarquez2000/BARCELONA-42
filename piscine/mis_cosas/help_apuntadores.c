#include <unistd.h>
#include <stdio.h>


void funcion (int* ptr, int value)
{
	*ptr = 5;
	value = 33;

}




int main()
{
	int a=1,b=3;
	
        printf("%d\n",a);
        printf("%d\n",b);

	funcion(&a, b);

	printf("%d\n",a);
	printf("%d\n",b);
	//printf("%.2f",c);
	return (0);
}

#include <stdio.h>

int main()
{
	char u[4];
	char *v = "hola";

	v = "1";
	//v[1] = '2';
	//v[2] = '3';
	

	for (int i = 0; i <= 3; i++)
	{
		printf("%c", v[i]);
	}	
}

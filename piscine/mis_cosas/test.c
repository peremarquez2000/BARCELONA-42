void funcion(char *str)
{
	write(1,bombo,5);
		
}

int main()
{
	char* bombo;
	bombo = "testoo";
	funcion(&bombo);

	return (0);
	
}

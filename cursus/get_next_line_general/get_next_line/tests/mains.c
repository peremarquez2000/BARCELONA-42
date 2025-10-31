/* int main()
{
	char *fileName = "test.txt";
	// char* nl;
	int fd = open(fileName, O_RDONLY);
	if (fd == -1)
	{
		printf("\nError Opening File!!\n");
		return (1);
	}
	else
		printf("\nFile \"%s\" opened sucessfully!\n", fileName);

	for (int i = 0; i < 7; i++)
	{
		printf("\ni = %d\n", i);
		printf("%s", get_next_line(fd));
	}
	return (0);
} */
/* int main()
{
	char* fileName = "test.txt";
	// char* nl;
	int fd = open(fileName, O_RDONLY);
	if(fd == -1)
	{
		printf("\nError Opening File!!\n");
		return(1);
	}
	else
		printf("\nFile \"%s\" opened sucessfully!\n", fileName);

	printf("%s",get_next_line(fd));
	return(0);
} */
/*
int main(void)
{
	char *line;

	while ((line = get_next_line(0)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	return 0;
}
*/
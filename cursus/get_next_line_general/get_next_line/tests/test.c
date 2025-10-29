#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    char *buffer;
    buffer = malloc(a*sizeof(char));
    char* fileName = "test2.txt";
    int fd = open(fileName, O_RDONLY);
    if(fd == -1)
    {
        printf("\nError Opening File!!\n");
        return(1);
    }
    else
        printf("\nFile \"%s\" opened sucessfully!\n", fileName);


    for (int i =0; i<50; i++)
    {
        read(fd,buffer,a);
        // printf("%ld", read(fd,buffer,a));
        printf("%s\n", buffer);
    }
}
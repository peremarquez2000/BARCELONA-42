/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:26:22 by pemarque          #+#    #+#             */
/*   Updated: 2025/10/01 20:00:49 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif


char *get_next_line(int fd)
{
    char *nl = NULL;
    int nl_size;
    static char *post_nl = NULL;
    static int post_nl_size = 0;
    char *buffer;
    int buffer_size;
    int bytesRead;
    int posicion_barra_n;
    int flag;

    nl_size = 0;
    flag = 1;
    buffer_size = BUFFER_SIZE;
    buffer = (char *)malloc(buffer_size * sizeof(char));
    if(!buffer)
        return (NULL);
    while(flag)
    {
        if (nl == NULL && post_nl!= NULL)
        {
            printf("\nPREVIAAAA\n");
            printf("------------------------\n");
            nl = post_nl;
            nl_size = post_nl_size;
            post_nl_size = 0;
            post_nl = NULL;
            printf("\n nl = %s", nl);
            printf(" nl_size = %d \n", nl_size);
            printf("\n post_nl = %s \n", post_nl);
            printf(" post_nl_size = %d \n", post_nl_size);

            if (bytesRead == 0)
                flag = 0;
        }
        bytesRead = read(fd, buffer, buffer_size);
        posicion_barra_n= ft_posicion_barra_n(buffer, bytesRead);
        if(posicion_barra_n != -1)
        {
            printf("\nHE ENCONTRADO UN \\N\n");
            printf("------------------------\n");
            nl = ft_guarda_contingut(nl,nl_size, buffer, posicion_barra_n);
            nl_size +=  posicion_barra_n + 1;
            post_nl = ft_tail(buffer, bytesRead, posicion_barra_n + 1);
            post_nl_size = bytesRead - posicion_barra_n - 1;
            printf("\n nl = %s", nl);
            printf(" nl_size = %d \n", nl_size);
            printf("\n post_nl = %s \n", post_nl);
            printf(" post_nl_size = %d \n", post_nl_size);
            flag = 0;
        }
        else if(bytesRead != buffer_size)
        {
            nl = ft_guarda_contingut(nl,nl_size, buffer, bytesRead - 1);
            nl_size += bytesRead; 
            printf("\nHE LLEGADO AL FINAL\n");
            printf("------------------------\n");
            printf("\nbytesread = %d", bytesRead);
            printf("\nbuffer_size = %d", buffer_size);
            printf("\nnl = %s", nl);
            printf("\nnl_size = %d \n", nl_size);
            printf("\npost_nl = %s \n", post_nl);
            printf("\npost_nl_size = %d \n", post_nl_size);

            flag = 0;
        }
        else 
        {
            nl = ft_guarda_contingut(nl,nl_size, buffer, bytesRead);
            nl_size +=  bytesRead;
            post_nl = NULL;
            post_nl_size = 0;
            printf("\nBUFFER TRANQUILO\n");
            printf("------------------------\n");
            printf("\nnl = %s", nl);
            printf("\nnl_size = %d \n", nl_size);
            printf("\npost_nl = %s \n", post_nl);
            printf("\npost_nl_size = %d \n", post_nl_size);

        }
        // printf("\n new_line = %s \n", nl);
    }
    printf("\n VALOR QUE RETORNAMOS = %s", nl);
    return (nl);
}
int main()
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
    


    for (int i = 0; i<3; i++)
    {
        // printf("i = %d\n", i);
        // printf("%s",get_next_line(fd));
        get_next_line(fd);
    }
    // get_next_line(fd);
    return(0);
}
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
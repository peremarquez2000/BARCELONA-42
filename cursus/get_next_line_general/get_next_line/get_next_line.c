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
#define BUFFER_SIZE 0
#endif

char *get_next_line(int fd)
{
    char *nl;
    char *character;
    int bytesRead;
    int size;

    size = BUFFER_SIZE;
    character = (char *)malloc(1*sizeof(char));
    nl = (char *)malloc((size)*sizeof(char));
    
    bytesRead = read(fd, character, 1);
    if(!nl || !character || bytesRead != 1)
        return (NULL);
    while (bytesRead == 1 && *character != '\n')
    {
        nl = copia_plus_one(nl, size, *character);
        if (!nl)
            return(NULL);
        bytesRead = read(fd, character, 1);
        size++;
    }
    if (*character == '\n')
        nl = copia_plus_one(nl, size, *character);
    return (nl);
}
int main(){
    
    char* fileName = "test.txt";
    char* nl;
    int fd = open(fileName, O_RDONLY);
    int i = 0;
    if(fd == -1)
    {
        printf("\nError Opening File!!\n");
        return(1);
    }
    else
        printf("\nFile \"%s\" opened sucessfully!\n", fileName);
    

    
    
    while (i < 7)
    {
        nl = get_next_line(fd);
        printf("%s",nl);
        i++;
    }
    
    return(0);
}
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
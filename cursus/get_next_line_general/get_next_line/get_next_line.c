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

char *get_next_line(int fd)
{
    char *nl;
    char *character;
    int size;
    int bytesRead;

    size = 0;
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
    

    
    
    while (i < 50)
    {
        nl = get_next_line(fd);
        printf("\n%s",nl);
        i++;
    }
    
    return(0);
}
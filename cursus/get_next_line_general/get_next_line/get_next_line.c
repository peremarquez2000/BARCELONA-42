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
#include "get_next_line_utils.c"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
//int read(int fileDescriptor, void *buffer, size_t bytesToRead)
char *get_next_line(int fd)
{
    char    *nl;
    char buffer[1024];
    int bytesRead = read(fd, buffer, sizeof(buffer));
    nl = malloc((bytesRead + 1) * sizeof(char));
    mempcpy(nl,buffer, bytesRead);
    nl[bytesRead] =  74;
    return (nl);
    // printf("%s", nl);
}
/*
int main(){
    
    char* fileName = "test.txt";
    int fd = open(fileName, O_RDONLY);
    if(fd == -1){
        printf("\nError Opening File!!\n");
        return(1);
    }
    else{
        printf("\nFile \"%s\" opened sucessfully!\n", fileName);
    }
    char buffer[1024];
    int bytesRead = read(fd, buffer, sizeof(buffer));
    printf("%d bytes read!\n", bytesRead);
    printf("\nFile Contents:\n");
    for(int i=0; i<bytesRead; i++)
    {
        write(1,&buffer[i],1);
    }


    return 0;
}
*/
int main(){
    
    char* fileName = "test.txt";
    int fd = open(fileName, O_RDONLY);
    if(fd == -1)
    {
        printf("\nError Opening File!!\n");
        return(1);
    }
    else
        printf("\nFile \"%s\" opened sucessfully!\n", fileName);
    printf("\n\n%s", get_next_line(fd));
    return 0;
}

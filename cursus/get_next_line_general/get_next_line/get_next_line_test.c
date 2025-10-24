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
#include	"get_next_line_utils.c"
# include <fcntl.h>
#include "libft.h"
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>
// #include <string.h>


char *get_next_line(int fd)
{
    int bytesRead;
    char *nl;

    bytesRead = 1;
    nl = (char *)malloc(bytesRead*sizeof(char));
    if(!nl)
        return (NULL);
    nl[0] ='a';
    //while (!checker_nl[bytesRead - 1] || checker_nl[bytesRead - 1] != '\n')
    //{
    for(int i=0; i<4; i++)
    {
        printf("\ni = %d",i);
        free(nl);
        nl = (char *)malloc((bytesRead + 1) * sizeof(char));
        bytesRead = read(fd, nl, bytesRead);
        printf("\nbytesread: %d",bytesRead);
        printf("\nnl: %c",nl[bytesRead - 1]);
    }

    //}
    // printf("\nCHECKER: %s",checker_nl);
    return (nl);
}

int main(){
    
    char* fileName = "test.txt";
    int fd = open(fileName, O_RDONLY);
    char *line;
    if(fd == -1)
    {
        printf("\nError Opening File!!\n");
        return(1);
    }
    else
        printf("\nFile \"%s\" opened sucessfully!\n", fileName);
    line = get_next_line(fd);
    (void)line;
}
/*
static int ft_count_nl(char *text)
{
    int count = 0;
    while (*text)
    {
        if (*text == '\n')
            count++;
        text++;
    }
    return (count);
}
*/
/*
char *get_next_line(int fd)
{
    static int  calls = 0;
    char    **line;
    char buffer[99999];
    int n_nlines;

    read(fd, buffer, sizeof(buffer));
    n_nlines = ft_count_nl(buffer);
    line = ft_split(buffer, '\n');
    if (calls == n_nlines + 1 || !line )
        return (NULL);
    return  (line[calls++]);
}
*/
/*
int main(){
    
    char* fileName = "test.txt";
    int fd = open(fileName, O_RDONLY);
    char *line;
    if(fd == -1)
    {
        printf("\nError Opening File!!\n");
        return(1);
    }
    else
        printf("\nFile \"%s\" opened sucessfully!\n", fileName);
    for(int i=0; i<10; i++)
    {
        line = get_next_line(fd);
        if (line)
            printf("%s\n", line);
    }
    return(0);
}
*/
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

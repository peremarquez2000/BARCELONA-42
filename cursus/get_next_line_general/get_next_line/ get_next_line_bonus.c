/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:26:22 by pemarque          #+#    #+#             */
/*   Updated: 2025/10/01 20:00:49 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "get_next_line.h"
#include <stdio.h>
int main()
{
	char *fileName1 = "test1.txt";
	char *fileName2 = "test2.txt";
	char *fileName3 = "test3.txt";
	char* nl;
	int fd1 = open(fileName1, O_RDONLY);
	int fd2 = open(fileName2, O_RDONLY);
	int fd3 = open(fileName3, O_RDONLY);
	if (fd1 == -1 || fd2 == -1 || fd3 == -1)
	{
		printf("\nError Opening Files!!\n");
		return (1);
	}
	else
    {
		printf("\nFile \"%s\" opened sucessfully!\n", fileName1);
		printf("\nFile \"%s\" opened sucessfully!\n", fileName2);
		printf("\nFile \"%s\" opened sucessfully!\n", fileName3);
    }

		printf("\ni = %d\n", 1);
		nl = get_next_line(fd2);
		printf("%s", nl);

        printf("\ni = %d\n", 2);
		nl = get_next_line(fd1);
		printf("%s", nl);

		printf("\ni = %d\n", 3);
		nl = get_next_line(fd1);
		printf("%s", nl);
		
	return (0);
}
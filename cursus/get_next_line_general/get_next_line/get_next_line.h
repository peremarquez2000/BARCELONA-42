/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:26:22 by pemarque          #+#    #+#             */
/*   Updated: 2025/10/01 20:00:49 by pemarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

// get_next_line.c
char *get_next_line(int fd);

// get_next_line_utils.c
int ft_posicion_barra_n(char *buffer, int size);
char *ft_tail(char *buffer, int size, int start);
char *ft_new_nl(char *nl, int nl_size, char *buffer, int end_position);
char *ft_new_buff(char *buff1, int buff1_size, char *buff2, int buff2_size);

#endif
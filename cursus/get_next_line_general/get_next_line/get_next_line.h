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
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
// get_next_line.c
char	*get_next_line(int fd);
void	ft_free(char **buffer);
// get_next_line_utils.c
char	*ft_tail(char **buffer, int size, int start_pos);
char	*ft_new_line(char *buffer, int end_position);
char	*ft_new_buff(char **buf1, int *buf1_size, char **buf2, int buf2_size);
char	*ft_end_of_file(char **st_buffer, int *st_bytesread);
char	*ft_found_bar_n(char **st_buffer, int *st_bytesread, int bar_n_pos);
#endif

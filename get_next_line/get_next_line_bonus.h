/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 20:01:26 by mburgler          #+#    #+#             */
/*   Updated: 2022/12/25 20:31:00 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FD_COUNT
#  define FD_COUNT 4098
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line_bonus.h"

char	*get_next_line(int fd);
char	*read_line(int fd, char *mem);
char	*kill_after_backslash_n(char *mem);
char	*save_after_backslash_n(char *mem);
char	*ft_strchr2(const char *s, int c);
char	*ft_strjoin2(char *s1, char *s2);
char	*failsafe(char *str);
int		seek_end_of_line(char	*mem);
int		ft_strlen2(const char *s);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 08:17:09 by lucguima          #+#    #+#             */
/*   Updated: 2024/10/14 08:17:10 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strdup(const char *s);
int		ft_strlen(const char *str);
char	*ft_strcat(char *dest, char *src);

#endif

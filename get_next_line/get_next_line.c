/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaliel <kaliel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:07:50 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/24 18:30:57 by kaliel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*extra;
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	int			to_read;
	char		*new_pos;
	char		*temp;

    temp = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while ((to_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[to_read] = '\0';
		extra = ft_strjoin(extra, buffer);
        if(!temp)
        {
            free(extra);
            return (NULL);
        }
        free(extra);
        extra = temp;
		if ((new_pos = ft_findnew(extra)) != NULL)
		{
			*new_pos = '\0';
			line = ft_strdup(extra, new_pos - extra + 1);
			temp = ft_strdup(new_pos + 1, ft_strlen(new_pos + 1));
			free(extra);
            if (!temp)
            {
                free(line);
                free(extra);
                return (NULL);
            }
            free(extra);  
			extra = temp;
			return (line);
		}
	}
	if (extra && *extra)
	{
		line = ft_strdup(extra, ft_strlen(extra));
		free(extra);
		extra = NULL;
		return (line);
	}
	return (NULL);
}

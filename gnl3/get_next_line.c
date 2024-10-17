/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 08:16:49 by lucguima          #+#    #+#             */
/*   Updated: 2024/10/14 08:16:50 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*last_part(char **storage)
{
	char	*line;

	if (!storage || !*storage || **storage == '\0')
		return (NULL);
	line = ft_strdup(*storage);
	if (!line)
		return (NULL);
	free(*storage);
	*storage = NULL;
	return (line);
}

char	*merge(char	*storage, char *buffer)
{
	char	*new_storage;
	size_t	storage_len;
	size_t	buffer_len;

	storage_len = 0;
	buffer_len = ft_strlen(buffer);
	if (storage)
		storage_len = ft_strlen(storage);
	new_storage = malloc((storage_len + buffer_len + 1) * sizeof(char));
	if (!new_storage)
		return (free(storage), NULL);
	if (storage)
	{
		ft_strncpy(new_storage, storage, storage_len);
		new_storage[storage_len] = '\0';
		free(storage);
	}
	else
		new_storage[0] = '\0';
	ft_strcat(new_storage, buffer);
	return (new_storage);
}

char	*extract_line(char **storage)
{
	char	*line;
	char	*new_storage;
	char	*newline_pos;
	size_t	l_len;

	if (!storage || !*storage)
		return (NULL);
	newline_pos = ft_strchr(*storage, '\n');
	if (newline_pos)
	{
		l_len = newline_pos - *storage + 1;
		line = malloc((l_len + 1) * sizeof(char));
		if (!line)
			return (NULL);
		ft_strncpy(line, *storage, l_len);
		line[l_len] = '\0';
		new_storage = ft_strdup(newline_pos + 1);
		if (!new_storage)
			return (free(line), NULL);
		free(*storage);
		*storage = new_storage;
		return (line);
	}
	else
		return (last_part(storage));
}

char	*read_and_merge(int fd, char *storage)
{
	char	*buffer;
	ssize_t	bytes_read;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (free(storage), NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read == -1)
		return (free(buffer), free(storage), buffer = NULL, NULL);
	if (bytes_read == 0)
		return (free(buffer), buffer = NULL, storage);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		storage = merge(storage, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(buffer), free(storage), buffer = NULL, NULL);
		if (bytes_read == 0)
			break ;
	}
	free(buffer);
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = read_and_merge(fd, storage);
	if (!storage)
		return (NULL);
	line = extract_line(&storage);
	if (!line && storage)
	{
		free(storage);
		storage = NULL;
	}
	return (line);
}

// #include <stdio.h>
// #include <fcntl.h>

// int main () {
// 	char *line;
// 	int fd;

// 	fd = open("test.txt", O_RDONLY);
// 	if (fd == -1)
// 		exit(1);
// 	line = get_next_line(fd);
// 	while (line != NULL) {
// 		printf("%s", line);
// 		free (line);
// 		line = get_next_line(fd);
// 	}
// 	printf("%s", line);
// 	free(line);
// 	if (!close(fd))
// 		return (0);
// }

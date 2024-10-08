#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"


char	*fill_line(int fd, char *left_c, char *buffer);
char	*set_line(char *line_buffer);

char    *get_next_line(int fd)
{
    static char *left_c = NULL;
    char        *buffer;
    char        *line;
    char        *temp;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        return (NULL);
    left_c = fill_line(fd, left_c, buffer);
    free(buffer);
    if (!left_c || left_c[0] == '\0') // Handle empty left_c properly
    {
        free(left_c);
        left_c = NULL;
        return (NULL);
    }
    line = set_line(left_c);
    
    // Update left_c after extracting the line
    temp = left_c;
    size_t line_len = 0;

    while (line[line_len] && line[line_len] != '\n')
        line_len++;
    if (line[line_len] == '\n')
        line_len++;

    if ((ssize_t)ft_strlen(left_c) > (ssize_t)line_len) // Check if there's remaining content after the line
        left_c = ft_strdup(left_c + line_len, ft_strlen(left_c) - line_len);
    else
        left_c = NULL;

    free(temp);
    return (line);
}

char    *fill_line(int fd, char *left_c, char *buffer)
{
    ssize_t bytes_read;
    char    *temp;

    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[bytes_read] = '\0';
        if (left_c)
        {
            temp = left_c;
            left_c = ft_strjoin(left_c, buffer);
            free(temp);
        }
        else
            left_c = ft_strdup(buffer, ft_strlen(buffer));
        if (ft_strchr(left_c, '\n'))
            break ;
    }
    return (left_c);
}

char    *set_line(char *line_buffer)
{
    char    *line;
    size_t  len;

    len = 0;
    while (line_buffer[len] && line_buffer[len] != '\n')
        len++;
    
    line = (char *)malloc((len + 1 + (line_buffer[len] == '\n' ? 1 : 0)) * sizeof(char));
    if (!line)
        return (NULL);
    
    ft_strncpy(line, line_buffer, len);
    if (line_buffer[len] == '\n')
    {
        line[len] = '\n';
        len++;
    }
    line[len] = '\0';
    return (line);
}

// #include <stdio.h>
// #include <fcntl.h>
// int main() 
// {
//     int fd;
//     char *line;

//     // Open the file for reading
//     fd = open("test_file.txt", O_RDONLY);
//     if (fd < 0) {
//         perror("Error opening file");
//         return 1;
//     }

//     // Read lines using get_next_line and print them
//     while ((line = get_next_line(fd)) != NULL) {
//         printf("%s\n", line);
//         free(line);
//     }

//     // Close the file descriptor
//     close(fd);
//     return 0;
// }
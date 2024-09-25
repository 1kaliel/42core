#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

char *get_next_line(int fd);
int	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char *ft_findnew(char *str);
char	*ft_strdup(const char *s, size_t nb);



#endif
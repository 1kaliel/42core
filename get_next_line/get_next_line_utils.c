#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*ns;
	int		size;
	int		x;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2, ft_strlen(s2)));
	if (!s2)
		return (ft_strdup(s1, ft_strlen(s1)));
	size = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	x = 0;
	ns = (char *)malloc(size + 1);
	if (ns == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
		ns[i++] = s2[x++];
	return (ns[i] = '\0', ns);
}
char	*ft_findnew(char *str)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == '\n')
			return (str);
		str++;
	}
	return (NULL);
}

char	*ft_strdup(const char *s, size_t nb)
{
	size_t	len;
	char	*dup;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	if (nb < len)
		len = nb;
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

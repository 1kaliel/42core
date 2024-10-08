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
	if (!ns)
		return (NULL);
	while (s1 && s1[i] != '\0')
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2 && s2[x] != '\0')
		ns[i++] = s2[x++];
	return (ns[i] = '\0', ns);
}
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
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
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

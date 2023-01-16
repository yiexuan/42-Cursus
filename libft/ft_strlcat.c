#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (d < size)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[d + i] = src[i];
			i++;
		}
		dest[d + i] = '\0';
		return (d + s);
	}
	return (s + size);
}

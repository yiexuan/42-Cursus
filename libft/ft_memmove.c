#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d > s)
	{
		while (length > 0)
		{
			length--;
			d[length] = s[length];
		}
	}
	else
		ft_memcpy(dest, src, length);
	return (dest);
}

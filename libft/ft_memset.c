#include "libft.h"

void	*ft_memset(void *s, int c, size_t length)
{
	char	*p;

	p = (char *)s;
	while (length > 0)
	{
		p[length - 1] = c;
		length--;
	}
	return (s);
}

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	if (number >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	ptr = (void *)malloc(number * size);
	if (ptr == '\0')
		return (NULL);
	ft_bzero(ptr, number * size);
	return (ptr);
}	

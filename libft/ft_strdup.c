#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char))
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

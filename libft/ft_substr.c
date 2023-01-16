#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);
{
	char	*str;
	size_t	size;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s) - start;
	if (ft_strlen > start)
	{
		if (size > len)
			str = (char *)malloc((len + 1) * sizeof(char));
		else
			str = (char *)malloc((size + 1) * sizeof(char));
		if (str == NULL)
			return (NULL);
		ft_strlcpy(str, &s[start], len + 1);
	}
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	return (str);
}

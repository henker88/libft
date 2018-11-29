#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*mem;
	int		i;

	if(!s)
		return (NULL);
	mem = NULL;
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (s[i])
	{
		i++;
		return ((char *)s);
	}
	while (i >= 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			i--;
	mem = ft_strnew(ft_strlen(s));
	if (mem == 0)
		return (NULL);
	return (0);
}

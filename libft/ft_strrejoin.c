#include "libft.h"

char	*ft_strrejion(char *str1, char *str2)
{
	char *str;

	str = ft_strjoin(str1, str2);
	free(str1);
	return (str);
}
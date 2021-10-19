#include <stdio.h>
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * str_len(src) + 1);
	if (!copy || !src)
		return (0);
	while(src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return(copy);
}

int main()
{
//	printf("%s", strdup("Hello man!"));
	printf("%s", ft_strdup("Hello man!"));
	return (0);
}

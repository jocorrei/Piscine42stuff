#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", ft_strcmp(argv[1], argv[2]));
	return (0);
}

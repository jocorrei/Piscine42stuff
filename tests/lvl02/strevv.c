#include <stdio.h>

char    *ft_strrev(char *str)
{
	int		i;
	char	temp;
	int		len;

	len = 0;
	i = 0;
	while(str[len])
		len++;
	len -= 1;
	while(i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
//	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char s[] = "Hello World";
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}

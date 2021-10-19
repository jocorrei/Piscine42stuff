#include <stdio.h>

int	ft_str_inside(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		result;
	int		i;
	int		joker;

	joker = 1;
	i = 0;
	result = 0;
	while(ft_str_inside(str[i], "\t\n\v\f\r "))
		i++;
	while(ft_str_inside(str[i], "+-"))
	{
		if(str[i] == '-')
			joker *= - 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	return (result * joker);
}

int main()
{
	printf("%d", ft_atoi(" --42i32"));
	return (0);
}


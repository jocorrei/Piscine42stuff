#include <stdio.h>
#include <stdlib.h>

int str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int     *ft_rrange(int start, int end)
{
	int len;
	int	*array;
	int	i;

	i = 0;
	len = end - start + 1;
	array = (int *)malloc(sizeof(int) * len);
	if (!array)
		return (0);
	while (end >= start)
	{
		array[i] = end;
		i++;
		end -= 1;
	}
	return (array);
}

int main (void)
{
	int i = 0;
	int *result = ft_rrange(-1, 2);
	while(i < 4)
	{
		printf("The value is %d\n", result[i]);
		i++;
	}
	return (0);
}

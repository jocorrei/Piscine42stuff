#include <stdlib.h>
#include <stdio.h>

int	ft_str_inside(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int no_words(char *s)
{
	int len = 0;

	while (*s)
	{
		if (ft_str_inside(*s))
		{
			s++;
		}
		else
		{
			++len;
			while (*s && !ft_str_inside(*s))
			{
				s++;
			}
		}
	}
	return (len);
}

char    **ft_split(char *str)
{
	int		j;
	int		i;
	int		k;
	int		start;
	int		words;
	char	**arr;
	int		word_len = 0;

	i = 0;
	j = 0;
	words = no_words(str);
	arr = (char **)malloc(sizeof(char*) * (words + 1));
	while(str[i] && j < words)
	{
		while(str[i] && ft_str_inside(str[i]))
			i++;
		start = i;
		while(str[i] && !ft_str_inside(str[i]))
		{
			i++;
			word_len++;
		}
		arr[j] = (char*)malloc(sizeof(char) * (word_len + 1));
		k = 0;
		while(word_len)
		{
			arr[j][k] = str[start];
			k++;
			start++;
			word_len--;
		}
		arr[j][k] = '\0';
		j++;
	}
	arr[j] = 0;
	return (arr);
}

int main (void)
{
	char** res;
	for (res = ft_split("asdf qwerty zxcv"); *res != (void *)0; res++)
		printf("'%s',", *res);
	printf("\n");
	return (0);
}

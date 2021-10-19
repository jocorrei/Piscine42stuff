/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:06:35 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/30 19:55:54 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	strl(char *str)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (str[index] != '\0')
	{
		index++;
		count++;
	}
	return (count);
}

int	ok_cpy(char c, char *str2)
{
	while (*str2 != '\0')
	{
		if (c == *str2)
			return (1);
		str2++;
	}
	return (0);
}

int	wlen(char *str, int pos, char *charset)
{
	int	i;

	i = 0;
	while (str[pos + i] != '\0' && ok_cpy(str[pos + i], charset) == 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src, int pos, int size)
{
	char	*str;
	int		i;

	str = malloc(sizeof(str) * (size + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		str[i] = src[pos + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		j;
	int		i;
	int		size;

	i = 0;
	j = 0;
	split = malloc(sizeof (*split) * (strl(str) + 1));
	if (!split)
		return (0);
	while (i < strl(str))
	{
		if (!ok_cpy(str[i], charset))
		{
			size = wlen(str, i, charset);
			{
				split[j] = ft_strdup(str, i, size);
				i = i + size;
				j++;
			}
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
/*int		main(int argc, char **argv)
{
	char	**strs;
	int		i;
	int		j;

	j = 0;
	(void)argc;
	i = 0;
	strs = ft_split(argv[1], argv[2]);
	while(strs[i] != 0)
	{
		printf("%s\n", strs[i++]);
	}
	return (0);
}*/

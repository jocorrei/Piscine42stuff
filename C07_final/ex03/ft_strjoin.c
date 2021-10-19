/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:57:17 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/28 16:22:46 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_l(char *str);

int	ft_c(char **strs, int size)
{
	int	comp_size;
	int	i;

	comp_size = 0;
	i = 0;
	while (i < size)
	{
		comp_size = ft_l(strs[i]);
		i++;
	}
	return (comp_size);
}

int	ft_l(char *str)
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*temp;
	int		lent;

	lent = ft_l(sep)  + ft_c(strs, size);
		
	temp = (char *)malloc((ft_l(sep) * size + ft_c(strs, size) * sizeof(char)));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			temp[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			temp[k++] = sep[j++];
		i++;
	}
	temp[k] = '\0';
	return (temp - lent);
}
int main(void) 
{
	char	*test[11];

	test[0] = "Hello";
	test[1] = "dude";
	test[2] = ",";
	test[3] = "i am";
	test[4] = "looking";
	test[5] = "like";
	test[6] = "fucking";
	test[7] = "retard";
	test[8] = "testing";
	test[9] = "like";
	test[10] = "this";

	printf("%s\n", ft_strjoin(11, test, "-"));

	return(0);

}

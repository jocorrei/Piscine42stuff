/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:56:58 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/25 22:55:49 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	while (*str++ != '\0')
		count ++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*strcpy;

	index = 0;
	strcpy = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (strcpy == NULL)
		return (0);
	while (src[index] != '\0')
	{
		strcpy[index] = src[index];
		index++;
	}
	strcpy[index] = '\0';
	return (strcpy);
}
int main()
{
	printf("%s", strdup("Hello man!"));
	printf("%s", ft_strdup("Hello man!"));
	return (0);
}

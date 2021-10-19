/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:42:16 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/18 20:22:04 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	counter(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	aux;

	i = 0;
	aux = counter(dest);
	if (size <= aux)
		return (size + counter(src));
	while (src[i] != '\0' && i + aux + 1 < (size))
	{
		dest[i + aux] = src[i];
		i++;
	}
	dest[i + aux] = '\0';
	return (counter(dest) + counter (&src[i]));
}
/*int main()
{
	char str1[] = "Hello ";
	char str2[] = "dude";

	printf("%u", ft_strlcat(str1, str2, 1));
	return (0);
}*/

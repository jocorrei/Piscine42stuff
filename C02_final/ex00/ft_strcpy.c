/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:16:54 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/15 12:22:51 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*int main(void)
{
    char    src[] = {'a', 'b', 'c', 'b', 'g', 'o'};
    char    dest[6] = {};
    int i;

    i = 0;
    ft_strcpy(dest, src);
    printf("%s", dest);
    return(0);
}*/

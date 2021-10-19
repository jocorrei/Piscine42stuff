/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:44:40 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/15 20:01:41 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
		{
			str[index] = str[index] + 32;
			index++;
		}
		else
		{
			index++;
		}
	}
	return (str);
}
/*int		main(void)
{
    char test1[] = {'a', 'A', '^'};
    char *test2;
    test2 = test1;

    printf("%s", ft_strlowcase(test2));
    return(0);
}*/

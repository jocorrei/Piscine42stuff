/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:29:08 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/15 17:31:33 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			index++;
		}
		else
		{
			return (0);
			index++;
		}
	}
	return (1);
}
/*int		main(void)
{
    char test1[] = {'0', 'b', 'c'};
    char *test2;
    test2 = test1;

    printf("%i", ft_str_is_lowercase(test2));
    return(0);
}*/

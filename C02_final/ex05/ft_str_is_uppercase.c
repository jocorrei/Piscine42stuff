/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:33:01 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/15 17:35:51 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
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
    char test1[] = {'Z', 'A', '2'};
    char *test2;
    test2 = test1;

    printf("%i", ft_str_is_uppercase(test2));
    return(0);
}*/

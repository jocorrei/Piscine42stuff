/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:21:30 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/15 17:24:08 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
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
    char test1[] = "";
    char *test2;
    test2 = test1;

    printf("%i", ft_str_is_numeric(test2));
    return(0);
}*/

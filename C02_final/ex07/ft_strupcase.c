/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:43:34 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/15 19:45:35 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] = str[index] - 32;
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

    printf("%s", ft_strupcase(test2));
    return(0);
}*/

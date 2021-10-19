/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:34:29 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/15 15:37:30 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			index++;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z')
		{
			index++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int main(void)
{
    char *src_i;
    char src[] = "lisboa";
    src_i = src;

    printf("%i", ft_str_is_alpha(src_i));
}*/

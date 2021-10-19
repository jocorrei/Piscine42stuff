/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalaze.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 01:54:39 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/16 20:02:17 by jocorrei         ###   ########.fr       */
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

int	ft_v_is_alpha(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= '0' && a <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	up;

	up = 0;
	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_v_is_alpha(str[i]) && up)
		{
			str[i] = str[i] - 32;
			up = 0;
		}
		else if (ft_v_is_alpha(str[i]))
			up = 0;
		else
			up = 1;
		i++;
	}
	return (str);
}
/*int main()
{
    char str[] = "heLlo, Wor!ld moTh32er42fucker";
    char *str2;
    str2 = str;

    printf("%s", ft_strcapitalize(str2));
    return (0);
}*/

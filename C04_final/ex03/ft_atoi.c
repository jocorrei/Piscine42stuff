/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 00:38:12 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/20 13:53:14 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_inside(char c, char *str)
{
	while (*str != '\0')
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	num;
	int	joker;

	num = 0;
	joker = 1;
	while (ft_str_inside(*str, "\t\n\v\f\r "))
		str++;
	while (ft_str_inside(*str, "-+"))
		if (*str++ == '-')
			joker = -1 * joker;
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num;
		num = num + (*str - '0');
		str++;
	}
	return (num * joker);
}
/*int main ()
{
   char str1[] = "+--+42c";
   printf("%d", ft_atoi(str1));
   return (0); 
}*/

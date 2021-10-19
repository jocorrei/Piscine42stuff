/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:52:53 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/29 17:40:55 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, '8', 1);
	}
	else if (nb < 0)
	{
		write(1, '-', 1);
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		write(1,'0' + nb % 10, 1);
	}
}

int	ft_strin(char c, char *str)
{
	while (*str != '\0')
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (str[index] != '\0')
	{
		index++;
		count++;
	}
	return (count);
}

int	ft_atoi(char *str)
{
	int	num;
	int	joker;

	num = 0;
	joker = 1;
	while (ft_strin(*str, "\t\n\v\f\r "))
		str++;
	while (ft_strin(*str, "-+"))
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

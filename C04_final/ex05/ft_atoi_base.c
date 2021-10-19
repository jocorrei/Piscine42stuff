/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:57:35 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/27 13:42:47 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_inside(char c, char *str)
{
	while (*str != '\0')
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

int	check_before(char *str, char *c)
{
	while (str != c)
	{
		if (*c == *str)
			return (0);
		str++;
	}
	return (1);
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	lenbase;
	int	i;

	lenbase = ft_strlen(base);
	i = 0;
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return ;
	while (base[i] != '\0')
	{
		if (!check_before(base, &base[i]) || ft_str_inside(base[i], "+-"))
			return ;
		i++;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -1 * nbr;
	}
	if (nbr >= lenbase)
	{
		ft_putnbr_base(nbr / lenbase, base);
		ft_putnbr_base(nbr % lenbase, base);
	}
	else
		write(1, base + nbr, 1);
}

int	ft_atoi_base(char *str, char *base)
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
	num = num * joker;
	ft_putnbr_base(num, base);
	return (0);
}
int main()
{
	ft_atoi_base("-2147483647", "0123456789ABCDEF");
	return (0);
}

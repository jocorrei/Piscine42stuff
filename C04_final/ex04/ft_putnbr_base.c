/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:55:05 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/27 12:18:31 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	ft_str_inside(char c, char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return (1);
		index++;
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

int	check_base(char *base)
{
	int	i;

	i = 0;
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (!check_before(base, &base[i]) || ft_str_inside(base[i], "+-"))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	lenbase;

	lenbase = ft_strlen(base);
	if (check_base(base))
	{
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
		{
			write(1, base + nbr, 1);
		}
	}
}
/*int	main()
{
	ft_putnbr_base(-2031, "");
	return (0);
}*/

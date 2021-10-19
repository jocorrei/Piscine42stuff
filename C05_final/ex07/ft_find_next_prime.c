/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:18:42 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/22 23:18:12 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

float	ft_sqrt(int nb)
{
	float	i;

	i = 0;
	if (nb == 1)
		return (1);
	if (nb > 1 && nb > i)
	{
		while (i * i != nb && !(i * i >= nb))
		{
			if (nb <= 20000)
				i += 0.00001;
			if (nb > 20000)
				i += 8;
		}
		return (i);
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
	{
		return (0);
	}
	if (nb <= 20000)
	{
		while (i != nb)
			if (nb % i++ == 0)
				return (0);
	}
	if (nb > 20000)

		while (i != ft_sqrt(nb))
			if (nb % i++ == 0)
				return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)


	int	i;

	i = nb;
	if (nb == 2147483647)
		return (0);
	if (ft_is_prime(nb))
		i++;
	while (!(ft_is_prime(i)))
		i++;
	return (i);
}
int main ()
{
	printf("%f\n", ft_sqrt(2147483646));
	printf("%d\n", ft_is_prime(2147483646));
	printf("%d\n", ft_find_next_prime(2147483646));
	return (0);
}

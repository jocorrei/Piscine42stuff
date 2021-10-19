/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:05:09 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/26 17:52:19 by jocorrei         ###   ########.fr       */
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
	{
		while (i != ft_sqrt(nb))
			if (nb % i++ == 0)
				return (0);
	}
	return (1);
}
int main ()
{
	printf("%f", ft_sqrt(7));
	printf("\n%d", ft_is_prime(7));
	return (0);
}

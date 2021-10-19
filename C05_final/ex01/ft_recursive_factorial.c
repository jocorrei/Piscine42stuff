/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:43:39 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/22 20:16:09 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (nb * (ft_recursive_factorial(nb - 1)));
	if (nb < 0)
		return (0);
	return (1);
}
/*int main()
{
	printf("%d", ft_recursive_factorial(3));
	return (0);
}*/

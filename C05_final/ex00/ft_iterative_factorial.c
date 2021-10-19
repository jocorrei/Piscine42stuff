/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:59:16 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/22 20:49:58 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		i = i * (nb - 1);
		nb--;
	}
	return (i);
}
/*int main()
{
    printf("%d", ft_iterative_factorial(3));
    return (0);
}*/

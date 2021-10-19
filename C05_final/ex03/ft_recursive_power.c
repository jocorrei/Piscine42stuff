/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 23:05:14 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/22 20:17:29 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb * (ft_recursive_power(nb, (power - 1))));
	else if (power == 0)
		return (1);
	else
		return (0);
}
/*int main()
{
	printf("%d", ft_recursive_power(1, 3));
	return (0);
}*/

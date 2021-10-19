/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 23:24:26 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/22 20:19:04 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 1)
		return (1);
	 if (index == 0)
		return (0);
	if (index > 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (-1);
}
/*int	main()
{
	int	i;

	i = -1;
	while(i < 10)
	{
		printf("%d\n", ft_fibonacci(i));
		i++;
	}
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:20:33 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/29 23:16:26 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	array_len(int min, int max)
{
	int	result;

	result = 0;
	result = max - min;
	return (result);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*copy;

	i = 0;
	if (max > min)
	{
		copy = (int *)malloc(sizeof(int) * array_len(min, max));
		if (copy == NULL)
			return (0);
		while (min != max)
		{
			copy[i] = min;
			i++;
			min++;
		}
	}
	else if (min >= max)
		return (NULL);
	return (copy);
}
int main()
{
	int i;
	int *copy;

	i = 0;
	copy = ft_range(-5, 13);
	while(*copy++ != 12)
	{
		printf("%d\n", *copy);
	}
	return (0);
}

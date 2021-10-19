/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:34:56 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/25 19:56:29 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	i = 0;
	*range = NULL;
	if (min >= max)
		return (0);
	temp = (int *)malloc(sizeof(int) * (max - min));
	if (temp == NULL)
		return (-1);
	if (min < max)
	{
		while (min < max)
		{
			temp[i] = min;
			i++;
			min++;
		}
	}
	*range = temp;
	return (i);
}
/*int main()
{
	return (0);
}*/

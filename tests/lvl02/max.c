/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:19:04 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/30 18:50:31 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int comp;
	unsigned int i;

	if(!tab)
		return (0);
	comp = tab[0];
	while(i < len)
	{
		if(tab[i] > comp)
		{
			tab[i] = comp;
		}
		i++;
	}
	return(comp);
}

int main ()
{
	int str[] = {1, 2, 3 , 4 ,5};

	printf("%d", max(str, 5));
	return (0);
}

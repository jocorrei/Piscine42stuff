/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:02:44 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/14 16:57:43 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	stored_v;

	i = 0;
	size--;
	while (i < size)
	{
		stored_v = tab[i];
		tab[i] = tab[size];
		tab[size] = stored_v;
		size--;
		i++;
	}
}

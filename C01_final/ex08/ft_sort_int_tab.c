/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:45:46 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/14 19:24:58 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			if (i != 0)
			{
				i--;
			}
		}
		else
		{
			i++;
		}
	}
}
/*void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_create_array(int *tab, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        ft_putchar(tab[i] + '0');
        i++;
    }
    
}

int main(void)
{
    int tab[] = {9, 5, 4, 6, 2, 1};

    ft_sort_int_tab(tab, 6);

    ft_create_array(tab, 6);

    ft_putchar('\n');

    return(0);
}*/

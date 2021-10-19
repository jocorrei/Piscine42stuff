/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:18:35 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/11 21:18:51 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0 ;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putchar('0' + first / 10);
			ft_putchar('0' + first % 10);
			ft_putchar(' ');
			ft_putchar('0' + second / 10);
			ft_putchar('0' + second % 10);
			if (first != 98 || second != 99)
			{
				write(1, ", ", 2);
			}
			second++;
		}
		first++;
	}	
}

/*int main()
{
	ft_print_comb2();
	return (0);
}*/
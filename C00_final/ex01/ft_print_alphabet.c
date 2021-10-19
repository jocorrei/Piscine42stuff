/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:07:41 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/11 21:07:59 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}	

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a' ;
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

/*int main(void)
{
	ft_print_alphabet();
	return (0);
}*/

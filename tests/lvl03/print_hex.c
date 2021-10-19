/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexxx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:35:26 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/30 22:01:42 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
   	int nb = 0;
	while ( str[i] != 0 && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
    return (nb);
}

void print_hex(int n)
{
	char arr[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &arr[n % 16], 1);
}		
int main (int ac, char **av)
{
	if (ac == 2)
	{
		print_hex(ft_atoi(av[1]));
	}
	write (1, "\n" ,1);
	return (0);
}

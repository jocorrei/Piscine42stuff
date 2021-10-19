/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:39:21 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/23 23:35:53 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int multiplier(char c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = c - 96;
	if (c >= 'A' && c <= 'Z')
		result = c - 64;
	return (result);
}

int main (int argc, char **argv)
{
	int i;
	int v;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') 
					|| (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				v = multiplier(argv[1][i]);
				while (v > 0)
				{
					write(1, &argv[1][i], 1);
					v--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, &"\n", 1);
	return(0);
}	

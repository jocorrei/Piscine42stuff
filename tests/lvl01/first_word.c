/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:30:48 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/30 14:41:23 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_str_inside(char c, char *str)
{
	while(*str != '\0')
	{
		if (*str++ == c)
			return(1);
	}
	return (0);
}



int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{	
		while (ft_str_inside(argv[1][i], "\t\n\v\f "))
			i++;
		while(!(ft_str_inside(argv[1][i], "\t\n\v\f ")) && argv[1][i] != '\0')
			write(1, &argv[1][i++], 1);
	}
	write(1, &"\n", 1);
	return (0);
}

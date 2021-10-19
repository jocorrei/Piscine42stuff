/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:31:57 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/30 14:40:31 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int check_inside_str(char c, char *str)
{
	while(*str != '\0')
	{
		if(*str++ == c)
			return(1);
	}
	return (0);
}

int ft_str_len(char *str)
{
	int count;

	count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

void last_words(char *str)
{
	int i;

	i = ft_str_len(str) - 1;
	while(check_inside_str(str[i], "\t\n\v\f\r "))
		i--;
	while((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
	{
		i--;
	}
	i++;
	while((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		last_words(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

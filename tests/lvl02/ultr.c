/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:23:12 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/25 16:50:13 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_str_inside (char c, char *str)
{
	while (*str != '\0')
	{
		if (*str++ == c)
			return (1);
	}
	return (0);
}

void str_ultr(char *str)
{
	int i;

	i = 0;
	while(*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
			write(1, &(*str), 1);
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
			write(1, &(*str), 1);
		}
		else
		{
			write(1, &(*str), 1);
		}
		str++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		str_ultr(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}

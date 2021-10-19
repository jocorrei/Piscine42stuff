/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:53:49 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/30 18:53:23 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int check_before(char *str, char *c)
{
	while (str != c)
	{
		if (*c == *str)
			return (0);
		str++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i] != '\0')
	{
		if(check_before(s1, &s1[i]))
		{	
			write(1, &s1[i], 1);
		}
		i++;
	}
	j = 0;
	i = 0;
	while(s2[j] != '\0')
	{
		if ((check_before(s1, &s2[j]) && (check_before(s2, &s2[j]))))
		{
			write(1, &s2[j], 1);
		}
		j++;
	}
	i++;
}

int	main(int argc, char **argv)
{
	if(argc == 3)
	{
		ft_union(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

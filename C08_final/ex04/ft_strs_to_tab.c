/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:16:32 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/29 23:04:08 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen1(char *str)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (str[index] != '\0')
	{
		index++;
		count++;
	}
	return (count);
}

char	*ft_strcpy(char *src)
{
	char	*dest;
	int		index;

	index = 0;
	dest = malloc(sizeof(char) * (ft_strlen1(src) + 1));
	if (!dest)
		return (0);
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*temp;
	int			i;

	i = 0;
	temp = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!temp)
		return (0);
	while (i < ac)
	{
		temp[i].size = ft_strlen1(av[i]);
		temp[i].str = av[i];
		temp[i].copy = ft_strcpy(av[i]);
		i++;
	}
	temp[i].str = 0;
	return (temp);
}

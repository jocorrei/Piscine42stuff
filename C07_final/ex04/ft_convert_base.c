/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:52:36 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/29 16:53:10 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkb(char *str, char *c)
{
	while (str != c)
	{
		if (*c == *str)
			return (0);
		str++;
	}
	return (1);
}

int	check_bases(char *base_from, char *base_to)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base_from[0] == '\0' || base_to[0] == '\0')
		return (0);
	if (ft_strlen(base_from) == 1 || ft_strlen(base_to) == 1)
		return (0);
	while(base_from[i] != '\0')
	{
		if(!checkb(base_from, &base_from[i]) || ft_strin(base_from[i], "+-"))
			return (0);
		i++;
	}
	while(base_to[j] != '\0')
	{
		if(!checkb(base_to, &base_to[j]) || ft_strin(base_to[j], "+-"))
			return (0);
		j++;
	}
	return (1);
}

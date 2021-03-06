/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 21:31:33 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/29 21:44:16 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[index] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

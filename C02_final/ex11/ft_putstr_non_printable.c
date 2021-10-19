/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:28:17 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/16 19:56:53 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_chr(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	index;
	unsigned char	helper;

	index = 0;
	while (1)
	{
		helper = str[index];
		if (helper == '\0')
			break ;
		if (helper < ' ' || helper > 126)
		{
			write (1, "\\", 1);
			print_chr("0123456789abcdef"[((unsigned int)helper) / 16]);
			print_chr("0123456789abcdef"[((unsigned int)helper) % 16]);
		}
		else
		{
			write (1, &helper, 1);
		}
		index++;
	}
}

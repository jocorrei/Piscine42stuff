/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:01:05 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/24 15:44:55 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_wdmatch(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str1[i] != '\0' && str2[j] != '\0')
	{
		if(str1[i] == str2[j])
		{
			i++;
			j++;
			if (str1[i] == '\0')
				while(*str1)
				{
					write(1, str1, 1);
					str1++;
				}
		}
		j++;

	}

}
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_wdmatch(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}	

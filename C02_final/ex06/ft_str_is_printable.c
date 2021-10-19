/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:53:52 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/15 18:30:09 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 32 && str[index] <= 127)
		{
			index++;
		}
		else
		{
			return (0);
			index++;
		}
	}
	return (1);
}
/*int		main(void)
{
    char test1[] = {'Z', 'A', '^'};
    char *test2;
    test2 = test1;

    printf("%i", ft_str_is_printable(test2));
    return(0);
}*/

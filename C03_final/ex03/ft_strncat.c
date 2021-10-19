/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 01:37:49 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/29 16:40:08 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*temp;

	temp = dest;
	if (nb != 0)
	{
		while (*dest != '\0')
			dest++;
		while (*src != '\0' && nb > 0)
		{
			if (nb == 0)
			{
				*dest = '\0';
				break ;
			}
			else
			{
				*dest = *src;
				dest++;
				src++;
			}
			nb--;
		}
		*dest = '\0';
	}
	return (temp);
}
int main () 
{
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   ft_strncat(dest, src, 0);

   printf("Final destination string : |%s|", dest);
   
   return(0);
}

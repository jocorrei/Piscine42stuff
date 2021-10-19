/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 00:53:22 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/18 17:08:29 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' || *dest != '\0')
	{
		*(dest++) = *(src++);
	}
	*dest = '\0';
	return (temp);
}
/*int main() {
   char str1[100] = "This is ", str2[] = "programiz.com";

   // concatenates str1 and str2
   // the resultant string is stored in str1.

   printf("original:\n %s", strcat(str1, str2));

   printf("\nremake:\n %s", ft_strcat(str1, str2));

   return 0;
}*/

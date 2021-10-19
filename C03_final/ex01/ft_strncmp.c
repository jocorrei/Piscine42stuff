/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 00:43:04 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/27 01:22:15 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	aux;

	aux = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && !aux && i < n)
	{
		aux = s1[i] - s2[i];
		i++;
	}
	if (i < n && !aux && (s1[i] == '\0' || s2[i] == '\0'))
		aux = s1[i] - s2[i];
	return (aux);
}
int main () 
{
   char str1[15];
   char str2[15];
   int ret;
   int ret_og;

   strcpy(str1, "abcdef");
   strcpy(str2, "abcdefz");

   ret = ft_strncmp(str1, str2, 7);
   ret_og = strncmp(str1, str2, 7);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   printf("\n___________ original ________\n");   

   if(ret_og < 0) {
      printf("str1 is less than str2");
   } else if(ret_og > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   printf("%d", ret_og);
   return(0);
}

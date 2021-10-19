/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:54:57 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/23 16:24:49 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{	
		if(s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

int main() 
{
  char str1[] = "abcde", str2[] = "abcdef";
  int result;
  int result2;

  // comparing strings str1 and str2
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result2 = ft_strcmp(str1, str2);
  printf("ft_strcmp(str1, str2) = %d\n", result2);

  return 0;
}

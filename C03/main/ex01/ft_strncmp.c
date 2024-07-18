/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:54:20 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 19:04:43 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

#include <stdio.h>
#include <string.h>
int main ()
{
   char s1[15];
   char s2[15];
   int ret;
   strcpy(s1, "swimmers");
   strcpy(s2, "swimmer");

   ret = ft_strncmp(s1, s2, 8);//Compara los primeros 8 caracteres
   if(ret < 0)
   {
      printf("s1 is less than s2");
   }
   else if(ret > 0)
   {
      printf("s2 is less than s1");
   }
   else
   {
      printf("s1 is equal to s2");
   }
   return(0);
}

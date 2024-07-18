/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:53:50 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 19:02:12 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)

{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

#include <stdio.h>
#include <string.h>
int main ()
{
   char s1[] = "swimmers";
    char s2[] = "swimmer";
   int ret;

   ret = ft_strcmp(s1, s2);
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

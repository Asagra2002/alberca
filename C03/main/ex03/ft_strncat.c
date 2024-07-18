/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:55:17 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 20:03:26 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
	{
		dest++;
	}
	while ((nb > 0) && *src)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (dest_start);
}

#include <stdio.h>
#include <string.h>

int main () {
   char src[15];
   char dest[15];

   strcpy(src,  "4ever");
   strcpy(dest, "swimmers");

   ft_strncat(dest, src, 3);//concatena solo los primeros 3 caracteres

   printf("Final destination string :%s", dest);

   return(0);
}

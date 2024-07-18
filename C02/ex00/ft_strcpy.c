/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:23:01 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 11:28:47 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src [i])
	{
		dest [i] = src [i];
		i++;
	}
	dest [i] = src [i];
	return (dest);
}

#include<stdio.h>
int main()
{
    char dest[15] = "swimmers"; 
    char src[15] = "4ever";
    ft_strcpy(dest,src);
    printf("%s\n", dest);
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:23:25 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 11:30:09 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (src [i] != '\0' && i < n)
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}

#include<stdio.h>
int main()
{
    char dest[15] = "swimmers"; 
    char src[15] = "4ever";
    ft_strncpy(dest,src,4);
    printf("%s\n", dest);
    return (0);
}

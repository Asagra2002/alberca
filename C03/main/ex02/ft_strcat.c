/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:54:51 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 19:06:05 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)

{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest_start);
}

#include <stdio.h>
#include <string.h>
int main() {
    char dest_str[15] = "swimmers";
    char src_str[] = "4ever";
    // Concatena src_str a dest_str
    ft_strcat(dest_str, src_str);
    // El resultado se muestra en dest_string
    printf("%s\n", dest_str);
    return 0;
}

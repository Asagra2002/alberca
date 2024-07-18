/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:26:06 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 11:33:46 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] >= 'a' && str [i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}

#include<stdio.h> 
int main()
{
    char a[15] = "swimmers4ever";

    printf("%s", ft_strupcase (a));
    return (0);
}

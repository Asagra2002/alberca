/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:26:40 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 11:37:58 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] >= 'A' && str [i] <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}

#include<stdio.h> 
int main()
{
    char a[15] = "SWIMMERS4EVER";

    printf("%s", ft_strlowcase (a));
    return (0);
}

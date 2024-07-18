/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:24:45 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 11:32:04 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

#include<stdio.h>
int main()
{
    int is_lowercase;
    char a[] = "swimmers4ever";
    is_lowercase = ft_str_is_lowercase (a);
    printf("%d\n", is_lowercase);
	return (0);
}

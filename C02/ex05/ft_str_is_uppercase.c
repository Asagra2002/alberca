/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:25:12 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 11:32:38 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

#include<stdio.h>
int main()
{
    int is_uppercase;
    char a[] = "swimmers4ever";
    is_uppercase = ft_str_is_uppercase (a);
    printf("%d\n", is_uppercase);
	return (0);
}

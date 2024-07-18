/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:24:19 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 11:31:26 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (1);
}

#include<stdio.h>
int main()
{
    int is_numeric;
    char a[] = "swimmers4ever";
    is_numeric = ft_str_is_numeric (a);
    printf("%d\n", is_numeric);
	return (0);
}

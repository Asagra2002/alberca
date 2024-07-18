/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:25:36 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/09 11:33:10 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}

#include<stdio.h>
int main(void)
{
    int is_printable;
    char a[] = "\n\a";
    is_printable = ft_str_is_printable (a);
    printf("%d\n", is_printable);
	return (0);
}

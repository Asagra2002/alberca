/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:20:43 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/11 10:11:57 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	while (str[i] == '+' || str [i] == '-')
	{
		if (str [i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

#include <stdio.h>
int main()
{
    char str_toconvert [] = " ---+--+1234ab567";

    int str_converted = ft_atoi(str_toconvert);

    printf("String to be Converted: %s\n", str_toconvert);
    printf("Converted to Integer: %d\n", str_converted);
    return (0);
}

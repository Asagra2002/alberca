/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sterlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:13:28 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/03 13:25:35 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putstr(char *str)

{
	int	count;

	count = 0;
	while (str [count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

int	ft_strleng(char *str)

{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
		j++;
	}
	return (j);
}

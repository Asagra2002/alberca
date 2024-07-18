/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:32:04 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/16 20:28:59 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int ** range, int min, int max)
{
	int	size;
	int	i;
	int	value;
	int	*tmp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	temp = (int *)malloc(size * sizeof(int));
	if (temp == NULL)
	{
		return (-1);
	}
	i = 0;
	value = min;
	while (value < max)
	{
		temp[i] = value;
		value++;
		i++;
	}
	*range = temp;
	return (size);
}

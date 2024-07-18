/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:03:42 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/16 18:03:52 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*arr;
	int	value;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	i = 0;
	value = min;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (value < max)
	{
		arr[i] = value;
		value++;
		i++;
	}
	return (arr);
}

#include <stdio.h> // Incluir stdio.h aquí para cumplir con las normas de incluir bibliotecas al inicio
int main()
{
    int min = 5;
    int max = 10;
    int *result = ft_range(min, max);
    if (result == NULL)
    {
        printf("Invalid range: min must be less than max.\n");
    }
    else
    {
        printf("Array of integers between %d and %d:\n", min, max);
        int i = 0;
        while (i < max - min)
        {
            printf("%d ", result[i]);
            i++;
        }
        printf("\n");
        // Liberar la memoria asignada
        free(result);
    }
    return 0;
}

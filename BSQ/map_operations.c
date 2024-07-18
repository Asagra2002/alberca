/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:44:32 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/17 20:35:36 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "functions.h"

void	print_map(char *map, int line_count, int max_width)
{
	int	i;

	i = 0;
	while (i < line_count)
	{
		write(1, &map[i * (max_width + 1)], max_width);
		write(1, "\n", 1);
		i++;
	}
}

void	process_map(t_map_params *params)
{
	char	*current_char;
	int		i;

	i = 0, j;
	while (i < params->line_count)
	{
		j = 0;
		while (j < params->max_width)
		{
			current_char = &params->map_copy[i * (params->max_width + 1) + j];
			if (*current_char == params->empty)
			{
				*current_char = params->full;
			}
			j++;
		}
		i++;
	}
}

char	*copy_map(char *map_start, int line_count, int max_width)
{
	char	*map_copy;
	int		i;

	i = 0;
	map_copy = (char *)malloc((line_count * (max_width + 1) + 1)
			* sizeof(char));
	if (map_copy == NULL)
	{
		write(1, "Memory allocation error\n", 24);
		return (NULL);
	}
	while (i < line_count * (max_width + 1))
	{
		map_copy[i] = map_start[i];
		i++;
	}
	map_copy[i] = '\0';
	return (map_copy);
}

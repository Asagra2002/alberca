/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_solver.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia2 <dgarcia2@student.hive.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 23:41:48 by dgarcia2          #+#    #+#             */
/*   Updated: 2024/07/17 23:41:50 by dgarcia2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	initialize_map_params(t_map_params *params)
{
	int	i;

	i = 0;
	params->line_count = params->map_characters[0] - '0';
	params->empty = params->map_characters[1];
	params->obstacle = params->map_characters[2];
	params->full = params->map_characters[3];
	params->map_start = &params->map_characters[4];
	while (params->map_start[i] != '\n' && params->map_start[i] != '\0')
		i++;
	params->max_width = i;
}

void	process_and_print_map(t_map_params *params)
{
	params->map_copy = copy_map(params->map_start, params->line_count,
			params->max_width);
	if (params->map_copy == NULL)
		return ;
	process_map(params);
	print_map(params->map_copy, params->line_count, params->max_width);
	free(params->map_copy);
}

void	solve_map(char *map_characters)
{
	t_map_params	params;

	params = {map_characters, NULL, '\0', '\0', '\0', 0, 0, NULL};
	initialize_map_params(&params);
	process_and_print_map(&params);
}

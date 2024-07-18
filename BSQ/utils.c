/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia2 <dgarcia2@student.hive.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:43:29 by dgarcia2          #+#    #+#             */
/*   Updated: 2024/07/17 13:57:07 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	check_input(int argc)
{
	if (argc < 2)
	{
		write(1, "Map Error\n", 10);
		exit(0);
	}
}

void	open_files(t_file_params *params, int index)
{
	params->files[index] = open(params->argv[index], O_RDONLY);
	if (params->files[index] < 0)
	{
		close(params->files[index]);
		write(1, "Map Error\n", 10);
	}
}

void	fill_map(int file_descriptor, char *map_characters, int max_buffer_size)
{
	ssize_t	map_bytes;

	map_bytes = read(file_descriptor, map_characters, max_buffer_size - 1);
	if (map_bytes < 0)
	{
		close(file_descriptor);
		write(1, "Map Error\n", 10);
		return ;
	}
	map_characters[max_buffer_size] = '\0';
}

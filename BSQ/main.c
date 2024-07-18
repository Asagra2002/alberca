/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia2 <dgarcia2@student.hive.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:35:06 by dgarcia2          #+#    #+#             */
/*   Updated: 2024/07/16 12:50:43 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	allocate_resources(int argc, int **files, char ***maps,
		int max_buffer_size)
{
	int	i;

	i = 1;
	*files = (int *)malloc(sizeof(int) * (argc - 1));
	*maps = (char **)malloc(sizeof(char *) * (argc - 1));
	while (i < argc)
	{
		(*maps)[i] = malloc(sizeof(char) * max_buffer_size);
		i++;
	}
}

void	process_file(t_process_params *params, int index)
{
	t_file_params	file_params;
	char			output_buffer[1024];
	int				output_length;

	file_params = {params->files, params->argv};
	open_files(&file_params, index);
	fill_map(params->files[index], params->maps[index],
			params->max_buffer_size);
	solve_map(params->maps[index]);
	output_length = snprintf(output_buffer, sizeof(output_buffer),
			"File contents:\n%s\n", params->maps[index]);
	write(1, output_buffer, output_length);
	close(params->files[index]);
}

void	process_files(t_process_params *params)
{
	int	i;

	i = 1;
	while (i < params->argc)
	{
		process_file(params, i);
		i++;
	}
}

void	cleanup_resources(int argc, int *files, char **maps)
{
	int	i;

	i = 1;
	free(files);
	while (i < argc)
	{
		free(maps[i]);
		i++;
	}
	free(maps);
}

int	main(int argc, char **argv)
{
	int					*files;
	char				**maps;
	int					max_buffer_size;
	t_process_params	params;

	max_buffer_size = 1024;
	check_input(argc);
	allocate_resources(argc, &files, &maps, max_buffer_size);
	params = {argc, argv, files, maps, max_buffer_size};
	process_files(&params);
	cleanup_resources(argc, files, maps);
	return (0);
}

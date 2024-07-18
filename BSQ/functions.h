/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgarcia2 <dgarcia2@student.hive.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:29:51 by dgarcia2          #+#    #+#             */
/*   Updated: 2024/07/17 20:29:52 by dgarcia2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct s_file_params {
    int *files;
    char **argv;
} t_file_params;

typedef struct s_map_params {
    char *map_characters;
    char *map_start;
    char empty;
    char obstacle;
    char full;
    int line_count;
    int max_width;
    char *map_copy;
} t_map_params;

typedef struct s_process_params {
    int argc;
    char **argv;
    int *files;
    char **maps;
    int max_buffer_size;
} t_process_params;

void check_input(int argc);
void open_files(t_file_params *params, int index);
void fill_map(int file_descriptor, char *map_characters, int max_buffer_size);
void print_map(char *map, int line_count, int max_width);
void process_map(t_map_params *params);
char *copy_map(char *map_start, int line_count, int max_width);
void initialize_map_params(t_map_params *params);
void process_and_print_map(t_map_params *params);
void solve_map(char *map_characters);
void allocate_resources(int argc, int **files, char ***maps, int max_buffer_size);
void process_files(t_process_params *params);
void cleanup_resources(int argc, int *files, char **maps);

#endif

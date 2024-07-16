/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:29:40 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/15 11:52:19 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_arguments(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					ft_swap (&argv[i], &argv[j]);
				}
				j++;
			}
			i++;
		}
	}
}

void	print_arguments(int argc, char *argv[])
{
	int		i;
	char	*ptr;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			ptr = argv[i];
			while (*ptr)
			{
				write(1, ptr, 1);
				ptr++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	sort_arguments (argc, argv);
	print_arguments (argc, argv);
	return (0);
}

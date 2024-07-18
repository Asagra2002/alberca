/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:34:47 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/02 16:46:50 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)

{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
include<stndio.h>
int	main()
{
	int	a;
	int	b;

	a = 25;
	b = 52;

	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return(0);
}*/

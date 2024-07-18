/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:19:42 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/02 17:34:06 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include<stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d" " - " "%d", a, b);
	return(0);
}*/

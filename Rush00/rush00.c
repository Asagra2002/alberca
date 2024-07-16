/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phuocngu <phuocngu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:47:30 by phuocngu          #+#    #+#             */
/*   Updated: 2024/06/30 09:47:37 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	line(int x, char c1, char c2)
{
	int	w;

	ft_putchar(c1);
	if (x == 1)
	{
		ft_putchar('\n');
		return ;
	}
	w = 1;
	while (w < x - 1)
	{
		ft_putchar(c2);
		w++;
	}
	ft_putchar(c1);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	h;

	h = 0;
	while (h == 0)
	{
		line(x, 'o', '-');
		h++;
	}
	while (h > 0 && h < y - 1)
	{
		line(x, '|', ' ');
		h++;
	}
	while (h == y - 1)
	{
		line(x, 'o', '-');
		h++;
	}	
}
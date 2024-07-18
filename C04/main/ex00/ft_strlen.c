/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoto <bsoto@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:43:44 by bsoto             #+#    #+#             */
/*   Updated: 2024/07/10 18:03:31 by bsoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

#include <stdio.h>
int main() {
    // Definición de una cadena de ejemplo
    char str[15] = "swimmers4ever!";
    // Llama a la función ft_strlen y muestra el resultado
    int length = ft_strlen(str);
    printf("Longitud de la cadena: %d\n", length);
    return (0); // Fin del programa
}

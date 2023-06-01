/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:40:07 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 12:38:01 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convierte el carácter en mayúscula si es minúscula.
Devuelve el valor del carácter ya cambiado.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c -32;
	}
	return (c);
}
/*
int	main(void)
{
	printf("Caracter en mayuscula: %c\n", ft_toupper('h'));
	return (0);
}
*/
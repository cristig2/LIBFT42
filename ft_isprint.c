/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:35:38 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 11:54:25 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indica si el caracter es ascii imprimible.Esta función toma un parámetro de 
tipo int, que es el carácter que se va a comprobar. Si el carácter es imprimible,
la función devuelve un valor distinto de cero. Si el carácter no es imprimible,
la función devuelve cero.*/

#include "libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("Caracter imprimible: %d\n", ft_isprint('?'));
	return (0);
}
*/
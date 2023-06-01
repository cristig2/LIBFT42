/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:35:24 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 11:50:42 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indica si el caracter es numerico. La función toma como parámetro un carácter
y devuelve un entero. Si el carácter es un dígito decimal, devuelve un valor 
diferente de cero, de lo contrario, devuelve cero.*/

#include "libft.h"

int	ft_isdigit(int arg)
{
	if (arg >= 48 && arg <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("Valor del caracter: %d\n", ft_isdigit('0'));
	return (0);
}
*/
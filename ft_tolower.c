/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:39:56 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 12:41:10 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convierte el caracter en minuscula si es mayuscula.
Devuelve el valor del caracter ya cambiado*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c +32;
	}
	return (c);
}
/*
int	main(void)
{
	printf("Caracter en minuscula: %c\n", ft_tolower('H'));
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:39:56 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:39:59 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convierte el caracter en minuscula si es mayuscula.
Devuelve el valor del caracter ya cambiado*/

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
	printf("Caracter en minuscula: %d\n", ft_(H));
	return (0);
}*/
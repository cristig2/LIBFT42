/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:40:07 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:40:10 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convierte el carácter en mayúscula si es minúscula.
Devuelve el valor del carácter ya cambiado.*/

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
	printf("Caracter en mayuscula: %d\n", ft_isalpha(h));
	return (0);
}*/
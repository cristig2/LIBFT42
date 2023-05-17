/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:39:34 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:39:34 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Elimina todos los caracteres de la string “set” desde el principio y desde el 
final de “s1”, hasta encontrar un carácter no perteneciente a “set”. La string 
resultante se devuelve con una reserva de malloc. Devuelve la string recortada 
o nulo(0) si falla la reserva de memoria.
    s1: La string que debe ser recortada.
	set: Los caracteres a eliminar de la string.
	len: Longitud de la string s1.
ft_strchr: Localiza la primera aparición de “set” en la string apuntada por “s1”
Devuelve un puntero a la ubicación del carácter, o nulo (0) si el carácter no 
aparece en la string.
ft_substr: Toma una string "s1" y crea una substring que empieza desde "0" y 
tiene una longitud de ("len" + '\0'). La función reserva memoria para la substring
utilizando "malloc" y devuelve un puntero de la substring resultante o nulo (0)*/

char *ft_strtrim(char const *s1, char const *set)
{
	int	len;

	if (!s1 || !set)
		return (0);
	while (s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len])
		len--;
	return (ft_substr(s1, 0, len + 1));	
}
/*
int	main(void)
{
	printf("New string: %s.\n", ft_strtrim("  Hello World   ", " "));
	return (0);
}*/
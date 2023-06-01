/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:39:47 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 13:24:42 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Toma una string "s" y crea una substring. “substr” empieza desde el índice 
"start" y tiene una longitud máxima ("len"). La función reserva memoria para 
“substr” utilizando "malloc" y devuelve un puntero de “substr” resultante o 
nulo(0) si falla la reserva de memoria.

Parametros
	s: La string original desde la que crear la substring.
	start: El índice del caracter en "s" desde el que empezar la substring.
	len: La longitud máxima de la substring.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if ((size_t)start > (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main(void)
{
	char	*str = "Hello, world!";
	char	*sub = ft_substr(str, 7, 5);

	if (sub)
	{
		printf("La string completa es: %s\n", str);
		printf("La substring es: %s\n", sub);
		free(sub);
	}
	return (0);
}
*/
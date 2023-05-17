/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:39:47 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:39:47 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Toma una string "s" y crea una substring. “substr” empieza desde el índice 
"start" y tiene una longitud máxima ("len"). La función reserva memoria para 
“substr” utilizando "malloc" y devuelve un puntero de “substr” resultante o 
nulo(0) si falla la reserva de memoria..
	s: La string desde la que crear la substring.
	start: El índice del caracter en "s" desde el que empezar la substring.
	len: La longitud máxima de la substring.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
	{
		substr = (char *)malloc(sizeof(*s));
		*substr = 0;
		return (substr);
	}
	if (ft_strlen(s) - start < len)
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
	printf("Substr: %s.\n", ft_substr("i just want this part #####", 0, 22));
	return (0);
}*/

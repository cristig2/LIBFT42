/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:32:07 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/12 19:33:51 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Descripción: Toma una cadena "s" y crea una substring a partir de esa string.
La substring empieza desde el índice "start" y tiene una longitud máxima "len".
	s: La string desde la que crear la substring.
	start: El índice del caracter en "s" desde el que empezar la substring.
	len: La longitud máxima de la substring.
La función reserva memoria para la subcadena utilizando "malloc" y devuelve un
puntero de la substring resultante o NULL si falla la reserva de memoria.
Si el valor start, que es desde donde empieza a pasarse la substring, es mayor
que el tamaño de la string, se devuelve ft_strdup de nada("").
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

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

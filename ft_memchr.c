/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:57:32 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/08 11:50:30 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La función memchr() busca la primera aparición de c (convertida en un
unsigned char) en los n bytes iniciales (cada uno interpretado como unsigned 
char) apuntados por s. 
Si se encuentra c, devuelve un puntero al byte correspondiente en s.
De lo contrario devuelve nulo.
str: Es el puntero al bloque de memoria donde se realiza la búsqueda.
c: Es el valor que se pasará como un int, pero la función realiza una 
búsqueda byte por byte utilizando la conversión de caracteres sin signo de este
valor.
n: Este es el número de bytes a analizar.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *) &s[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("StrCmp: %s\n", ft_memchr("Hola caracola", 'r', 15));
	return (0);
}*/
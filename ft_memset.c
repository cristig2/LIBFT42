/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:19:02 by crgallar          #+#    #+#             */
/*   Updated: 2023/04/25 11:44:53 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*memset llena los 1º bytes de longitud del área de memoria apuntada por b 
con el byte de cont.*/
/*La función memset copia el valor de c (convertido a un unsigned char) a
cada uno de los primeros len caracteres en el objeto al cual señala b.*/
//La función memset devuelve el valor de str.
//unsigned long o size_t para el compilador es exactamente lo mismo.
/*Usar size_t hace los programas más fáciles de leer porque size_t se usa para
representar dimensiones de cosas, cantidades de elementos en una estructura de 
datos, cantidad de memoria necesaria para algo, etc*/

void	*ft_memset(void *str, int c, size_t len)
{
	char	*p_str;
	size_t	i;

	p_str = str;
	i = 0;
	while (i < len)
	{
		p_str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*s;

	s = "Hola Mundo!";
	ft_memset(s, 'x', '4');
	printf("str: %s\n", s);
	return (0);
}

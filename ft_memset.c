/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:19:02 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/02 10:44:51 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*memset llena los 1º bytes de longitud del área de memoria apuntada por str 
con el byte de c.*/
/*La función memset copia el valor de c (convertido a un unsigned char) a
cada uno de los primeros len caracteres en el objeto al cual señala str.*/
//La función memset devuelve el valor de str.
//unsigned long o size_t para el compilador es exactamente lo mismo.
/*Usar size_t hace los programas más fáciles de leer porque size_t se usa para
representar dimensiones de cosas, cantidades de elementos en una estructura de 
datos, cantidad de memoria necesaria para algo, etc*/
/*sets a memory segment to a constant value, so, there is no "overlapping"
possible here, because there is just a unique, contiguous, memory segment to 
"set".*/

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*p_str;
	size_t			i;

	p_str = str;
	i = 0;
	while (i < len)
	{
		p_str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{	
	char string[] = "Hola Mundo!";
	ft_memset(string, 'x', 4);
	printf("str: %s\n", string);
	return (0);
}*/

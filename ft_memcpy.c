/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:42:19 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/02 11:04:26 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La funcion memcpy() copia n bytes desde el area de memoria src al area dest.
Dichas areas de memoria no deben tener ningun punto de interseccion; en tal caso
utilizar la funcion memmove(3) en lugar de memcpy().*/
/*La funcion memcpy() devuelve un puntero a dest.*/
/*El if es para los casos nulos en los que no hay nada que pegar o donde pegar*/
/*you are reading from one memory segment and, well, copying it to another 
memory segment. If the memory segments coincide at some point, a "overlapping" 
would occur.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	const char	*p_src;
	size_t		i;

	p_dest = dest;
	p_src = src;
	i = 0;
	if (!p_dest && !p_src)
		return (0);
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{	
	char str_src[] = "Hola Mundo!";
	char str_dest[] = "HelloWorld!";
	ft_memcpy(str_dest, str_src, 5);
	printf("str: %s\n", str_dest);
	return (0);
}*/
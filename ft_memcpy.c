/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:36:20 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:36:23 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copia de un string “src” a otra string “dest” n bytes. Si ambos son nulos (0),
devolverá nulos (0), si no devolverá la cadena “dest”.*/
/*El if es para los casos nulos en los que no hay nada que pegar o donde pegar*/
/*Se esta leyendo de un segmento de memoria y copiándolo a otro segmento de 
memoria. Si los segmentos de memoria coinciden en algún punto, ocurriría un 
"overlapping".*/

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
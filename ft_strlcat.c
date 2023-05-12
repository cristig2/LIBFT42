/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:17:18 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/08 16:16:10 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Esta función recibe un string dst, un string src y un tamaño dstsize.
Copia origen al final de destino hasta el tamaño indicado. Añadiendo un nulo al 
final para que sea una cadena valida y devuelve el tamaño de origen.
*/
/*
El programador es responsable de asignar una memoria lo suficientemente grande 
en el puntero de destino para almacenar ambas cadenas.
*/
/*Creo un contador el cual tiene que ser */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] != '\0' && dst_len + 1 < dstsize)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (dst_len + ft_strlen(&src[i]));
}
/*
int	main(void)
{	
	printf("string concatenada: %zu\n", ft_strlcat("Hola", " que tal", 15));
	return (0);
}*/

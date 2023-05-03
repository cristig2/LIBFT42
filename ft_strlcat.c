/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:17:18 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/02 17:26:20 by crgallar         ###   ########.fr       */
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
	size_t	cont_dst;
	size_t	cont_src;
	size_t	len_dst;
	size_t	len_src;
	size_t	freespace;

	cont_dst = 0;
	cont_src = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	freespace = dstsize - len_dst;
	if (!src && dstsize > 0)
	{
		while (cont_src < freespace)
		{
			dst[cont_dst] = src[cont_src];
			cont_dst++;
			cont_src++;
		}
		dst[cont_dst] = '\0';
	}
	return (len_dst + len_src);
}

int	main(void)
{	
	char str_src[] = " World!";
	char str_dst[] = "Hello";

	ft_strlcat(str_dst, str_src, 100);
	printf("string concatenada: %s\n", str_dst);
	return (0);
}

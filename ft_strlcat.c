/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:38:03 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:38:03 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copia “src” al final de “dst” concatenando ambas string hasta el tamaño 
indicado. Añadiendo un nulo al final para que sea una cadena valida y devuelve
el tamaño inicial de “dst” mas “src”.*/

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:36:30 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:36:32 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copia de un string “src” a otra string “dest” n bytes del área de memoria. 
Las áreas de memoria pueden superponerse (overlapping) como pasa en la función 
de memcpy(). Por ello, la copia se realiza de “src” a una matriz temporal para 
que no se solapen con “src” o “dest” y los bytes se copiaran entonces de la 
matriz temporal a dest. 
Si ambos son nulos (0), devolverá nulos (0), si no devolverá la cadena “dest”.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p_dst;
	const char	*p_src;
	size_t		i;

	p_dst = dst;
	p_src = src;
	i = 0;
	if (!p_dst && !p_src)
		return (0);
	if (p_dst > p_src)
		while (len-- > 0)
			p_dst[len] = p_src[len];
	else
	{
		while (i < len)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{	
	char str_src[] = "Hola Mundo!";
	char str_dst[] = "HelloWorld!";
	ft_memmove(str_dst, str_src, 5);
	printf("str: %s\n", str_dst);
	return (0);
}*/
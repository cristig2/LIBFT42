/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:38:15 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:38:21 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copia una string “src” a otra string “dest” hasta el tamaño “dstsize” -1 que
sería el ultimo carácter nulo de la string “src”, termiando “dest” con nulo
(‘\0’) si esta string no fuese 0.*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (strlen(src));
}
/*
int	main(void)
{	
	char str_src[] = "Hola!";
	char str_dst[] = "Hello World!";
	ft_strlcpy(str_dst, str_src, 12);
	printf("str: %s\n", str_dst);
	return (0);
}*/
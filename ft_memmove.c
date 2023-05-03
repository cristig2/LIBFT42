/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:27:31 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/02 11:55:04 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memmove() function copies len bytes from string src to string dst. The
two strings may overlap; the copy is always done in a non-destructive manner.*/
/*The main difference between memcpy and memmove is,memcpy works on the same
string but memmove works in separate memory by taking a copy of the string.*/
/*Due to this,overlapping happens in memcpy not in memmove*/
/*El if es para los casos nulos en los que no hay nada que pegar o donde pegar*/

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
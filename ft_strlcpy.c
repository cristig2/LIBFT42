/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:56:38 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/02 13:38:53 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlcpy() and strlcat() functions copy and concatenate strings with
the same input parameters and output result.*/
/*They are designed to be safer, more consistent, and less error prone 
replacements for the easily misused functions strncpy(3) and strncat(3).*/
/*strlcpy() and strlcat() take the full size of the destination buffer and
guarantee NUL-termination if there is room.  Note that room for the NUL
should be included in dstsize.*/
/* strlcpy() copies up to dstsize - 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0.*/
/*The strncpy() function shall return dst*/

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:36:08 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/30 13:21:13 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compara los primeros “n” bytes (cada uno interpretado como unsigned char) del
objeto apuntado por “s1” con los primeros “n” bytes del objeto apuntado por “s2”
Devuelve la resta de los primeros caracteres distintos encontrados entre ambos
strings. Si son todos iguales devuelve 0.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		comp;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		comp = *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i);
		if (comp != 0)
		{
			return (comp);
		}
		i++;
	}
	return (comp);
}
/*
int	main(void)
{
	printf("StrCmp: %d\n", ft_memcmp("Hola caracola", "Hola buenos días!", 12));
	return (0);
}*/

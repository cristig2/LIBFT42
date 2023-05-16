/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:47:08 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/12 18:45:53 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Busca la primera aparición del string neddle en el string str, sin pasarse de
len. Si needle está vacío devuelve str, si str está vació o no se encuentra 
needle en str devuelve NULL, y en caso de que se encuentre se devuelve un puntero
al primer carácter de la primera ocurrencia.*/

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	unsigned int		i;
	unsigned int		j;

	if (needle[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (needle[j] && str[i + j] && str[i + j] == needle[j]
			&& (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("StrCmp: %s\n", ft_strnstr("Hola que tal", "Buenos días", 12));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:37:32 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:37:32 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Reserva memoria con malloc y devuelve una nueva string, formada por la 
concatenación de “s1” y “s2”. Devuelve la nueva string o nulo (0) si falla la 
reserva de memoria.
    s1: La primera string.
    s2: La string a añadir a “s1”.*/

char *ft_strjoin(char const *s1, char const *s2)
{
    char const *s3;
    int         i;
    int         j;

    i = 0;
    j = 0;
    if (!s1 || !s2)
        return (0);
    s3 = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!s3)
        return (0);
    while (s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		nstr[i] = s2[j];
		j++;
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
/*
int	main(void)
{
	printf("Substr: %s.\n", ft_strjoin("Hello", "World"));
	return (0);
}*/
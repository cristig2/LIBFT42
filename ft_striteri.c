/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:37:18 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/26 10:36:24 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*A cada carácter de la string “s”, aplica la función “f” dando como parámetros
 el índice de cada carácter dentro de “s” y la dirección del propio carácter, 
 que podrá modificarse si es necesario. No devuelve nada.
    s: La string que iterar.
    f: La función a aplicar sobre cada carácter.
Si el string s y la funcion f son diferente a nuli, entra en el while y ejecuta
la funcion*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!(s == NULL && f == NULL))
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
int	main(void)
{
	printf("New string: %s.\n", ft_striteri("Hola,"oh la", *f(2, la));
	return (0);
}*/
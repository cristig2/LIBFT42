/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:38:45 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/26 10:35:07 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*A cada carácter de la string “s”, aplica la función “f” dando como parámetros 
el índice de cada carácter dentro de “s” y el propio carácter. Genera una nueva 
string con el resultado del uso sucesivo de “f”. Devolvera la string creada tras
el correcto uso de “f” sobre cada carácter o nulo (0) si falla la reserva de 
memoria.
	s: La string que iterar.
	f: La función a aplicar sobre cada carácter.*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dup;

	i = 0;
	dup = ft_strdup(s);
	if (dup == NULL || s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		dup[i] = f(i, s[i]);
		i++;
	}
	return (dup);
}
/*
int	main(void)
{
	printf("New string: %s.\n", ft_strmapi("oh la", *f(2, la)));
	return (0);
}*/
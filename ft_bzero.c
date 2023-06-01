/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:32:10 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 13:22:39 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convierte a 0 los primeros (len) bytes del string "str". No devuelve nada.
Otra forma de hacer esta función es llamando a la función memset que copia el 
valor de “c” (convertido a un unsigned char) a cada uno de los primeros “len” 
bytes del objeto al cual señala “str”. ft_memset(str, 0, len); */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	char	*p_str;
	size_t	i;

	p_str = str;
	i = 0;
	while (i < len)
	{
		p_str[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char string[] = "Hola Mundo!";
	ft_bzero(string, 4);
	printf("Primeros bytes a ceros: %s\n", string);
	return (0);
}
*/
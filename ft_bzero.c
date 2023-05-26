/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:32:10 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/26 10:04:08 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Convierte a ‘\0’ los “len” primeros bytes del string "str". No devuelve nada.
Otra forma de hacer esta función es llamando a la función memset y dándole los
parámetros que necesitamos para esta función: ft_memset(str, 0, len); */

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
	printf("str: %s\n", string);
	return (0);
}*/

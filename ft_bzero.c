/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:27:45 by crgallar          #+#    #+#             */
/*   Updated: 2023/04/27 17:18:16 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The bzero() function erases the data in the n bytes of the memory starting at 
the location pointed to by s, by writing zeroes (bytes containing '\0') to that
area.*/
/*Otra forma de hacer esta función es llamando a la función memset y dandole los
los parametros que necesitamos para esta función: ft_memset(str, 0, len); */

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

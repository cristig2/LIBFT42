/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:38:28 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/30 13:29:49 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indica el numero de caracters de una string.
Devuelve el numero de caracteres que forma esa string*/

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	printf("Numero de caracteres: %d\n", ft_strlen("Hello World"));
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:17:31 by marvin            #+#    #+#             */
/*   Updated: 2023/05/12 10:21:33 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*Asigna espacio de memoria de una matriz inicializado en 0. Según “num” de 
elementos “size” de longitud. Usamos esta función ya que nos facilita poner a 0
los bytes que necesitemos.*/

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, (num * size));
	return (ptr);
}
/*
int main(void)
{    
    printf("Asignacion de memoria a 0:%d", ft_calloc(10, 4));
}*/
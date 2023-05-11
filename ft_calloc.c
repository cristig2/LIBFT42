/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:17:31 by marvin            #+#    #+#             */
/*   Updated: 2023/05/09 11:17:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*Calloc() asigna espacio de memoria de una matriz inicializado en 0.
Segun num de elementos * size de longitud*/
/*Usamos la funcion bzero ya que nos facilita poner a 0 los bytes necesarios*/

void *ft_calloc(size_t num, size_t size)
{
    void *ptr:

    ptr = malloc(num * size);
    if (ptr == '\0')
        return (0);
    ft_bzero(ptr, (num * size));
    return (ptr);
}
/*
int main(void)
{    
    printf("Asignacion de memoria a 0:%d", ft_calloc(10, 4));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:19:02 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/15 13:13:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*La función memset() copia el valor de “c” (convertido a un unsigned char) a
cada uno de los primeros “len” bytes del objeto al cual señala “str”.
Con lo cual, llena los primeros bytes de longitud del área de memoria apuntada 
por “str” con el byte de c. Devuelve el valor de “str”.*/

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*p_str;
	size_t			i;

	p_str = str;
	i = 0;
	while (i < len)
	{
		p_str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{	
	char string[] = "Hola Mundo!";
	ft_memset(string, 'x', 4);
	printf("str: %s\n", string);
	return (0);
}*/

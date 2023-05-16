/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:20:05 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/08 10:37:48 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La función strrchr() es igual a strchr(), excepto que localiza el última
aparición de “c”. Devuelve un puntero a la ubicación del carácter “c”, o nulo(0)
si el carácter no aparece en la string.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*int	main(void)
{
	printf("str: %s\n", ft_strrchr("Hola caracola", 'a'));
	return (0);
}*/

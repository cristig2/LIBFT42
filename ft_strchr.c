/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:36:53 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:36:53 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Localiza la primera aparición de “c” (convertido a char) en la string 
apuntada por “s”. Devuelve un puntero a la ubicación del carácter, o nulo(0) si
el carácter no aparece en la string.
El carácter nulo de terminación es considerado como parte de la string, por lo 
tanto, si “c” está vacía, la función localiza el terminador `\0' y devuelve 
nulo (0).*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*int	main()
{
	printf("str: %s\n", ft_strchr("Hola caracola", 'a'));
}*/
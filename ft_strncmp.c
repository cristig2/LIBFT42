/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:08:50 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/08 10:54:52 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La función strncmp() debe comparar no más de n bytes (los bytes que siguen a un
carácter NULL no se comparan) de la matriz apuntada por s1 a la matriz apuntada
por s2. Si llega al final, devuelve la resta del último carácter comparado en
ambas cadenas, si n es nulo o si c sobrepasa n -1.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		comp;

	i = 0;
	comp = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		comp = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (comp != '\0')
			return (comp);
		i++;
	}
	return (comp);
}

/*int	main(void)
{
	printf("StrCmp: %d\n", ft_strncmp("Hola caracola", "Hola buenos días!", 12));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:38:55 by marvin            #+#    #+#             */
/*   Updated: 2023/05/12 10:22:01 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*strdup() devuelve un puntero a una nueva cadena de caracteres que es un 
duplicado de la cadena apuntada por s. La memoria para la nueva cadena se
obtiene automáticamente con malloc(3), y puede (y debe) liberarse con free(3)*/

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = (char *) malloc(sizeof (char) * ft_strlen(s) + 1);
	if (newstr == NULL)
		return (0);
	while (*s)
	{
		newstr[i++] = *s++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int	main(void)
{	
	printf("str: %s\n", ft_strdup("Hello World"));
	return (0);
}*/
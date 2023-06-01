/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:37:05 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 12:51:55 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Devuelve un puntero a una nueva string que es un duplicado de la string 
apuntada por “s”. La memoria para la nueva string se obtiene automáticamente 
con malloc, y puede (y debe) liberarse con free.*/

#include "libft.h"

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
	char *s1 = "Hola mundo!";
	char *s2 = strdup(s1);

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	free(s2);
	return (0);
}
*/
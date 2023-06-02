/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:23:21 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/02 11:11:44 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_wordcounter: cuenta el número de substrings en *str de entrada iterando(i) 
a través de la string e incrementando el conteo(j) cada vez que se encuentra el 
carácter delimitador(d).

ft_split: divide la string de entrada *str en varias substring en función del 
carácter delimitador(d) y devuelve una string que contiene las substrings 
resultantes(char**).

La función toma dos parámetros:
	str: un puntero a una string que debe dividirse.
	d: un carácter delimitador que especifica dónde se debe dividir la string.

Se le asigna memoria para las substrings (substr) utilizando malloc, teniendo 
en cuenta el número de substr(ft_wordcounter) más la terminación de la string. 
Si falla la asignación de memoria, se devuelve nulo(0).

Entra en bucle mientras *str no sea nulo. Si la posicion de la string es 
diferente al caracter delimitador(d) entra en el if donde obtendra el tamaño de
la palabra al llegar al delimitador.

Devuelve un array con las nuevas strings resultantes de la separación de str y 
si falla la reserva de memoria devolvera nulo(0).

flag lo uso para que no cuente el dilimitador como palabra*/

static int	ft_w_c(char const *str, char d)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] != d)
		{
			flag = 1;
		}
		if ((flag == 1 && str[i] == d) || (flag == 1 && str[i + 1] == '\0'))
		{
			j++;
			flag = 0;
		}			
		i++;
	}
	return (j);
}

char	**ft_free(char **strstr, size_t num)
{
	num = 0;
	while (strstr[num] != NULL)
	{
		free(strstr[num]);
		num++;
	}
	free(strstr);
	return (0);
}

char	**ft_split_split(char **strstr, size_t num, char d, char const *str)
{
	size_t	len;

	num = 0;
	while (*str)
	{
		if (*str != d)
		{
			len = 0;
			while (*str && *str != d)
			{
				++str;
				++len;
			}
			strstr[num] = ft_substr(str - len, 0, len);
			if (!strstr[num])
				return (ft_free(strstr, num));
			num++;
		}
		else
			str++;
	}
	strstr[num] = 0;
	return (strstr);
}

char	**ft_split(char const *str, char d)
{
	size_t	num;
	char	**strstr;

	strstr = (char **)malloc(sizeof(char *) * (ft_w_c((char *)str, d) + 1));
	if (!strstr)
		return (0);
	num = 0;
	strstr = ft_split_split(strstr, num, d, (char *)str);
	return (strstr);
}
/*
int	main(void)
{
	char const	*str;
	char		d;

	str = "Hola que tal";
	d = ' ';
	ft_split(str, d);
	printf("Strings: %i\n", ft_wordcounter(str, d));
	printf("Strings: %s\n", str);
	return (0);
}*/

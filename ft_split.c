/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:23:21 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/21 12:23:21 by crgallar         ###   ########.fr       */
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
si falla la reserva de memoria devolvera nulo(0).*/

static size_t   ft_wordcounter(char const *str, char d)
{
    size_t         i;
    size_t         j;

    i = 0;
    j = 0:
    while (str[i] != '\0')
    {
        if (str[i] != d)
            i++;
        else if (str[i] == d || str[i] == '\0')
            j++;
    }
    return (j);
}

char **ft_split(char const *str, char d)
{
    char        **substr;
    size_t      len;
    size_t      num;

    substr = malloc(sizeof(char*) * (ft_wordcounter(str, d) + 1));
    if (substr != '\0') 
        return (0);
    num = 0;
    while (*str) 
    {
        if (*str != d) 
        {
            len = 0;
            while (*str && *str != d)//probar si con solo este while funciona
            {
                ++len;//suma dentro del while
                ++str;
            }
            substr[num++] = ft_substr(str - len, 0 len);
        }
        else
            str++;//suma cuando sale del while
    }
    substr[num] = 0;//porque existe num si con str(posicion del string) podria funcionar
    return (substr)
}
/*
int	main(void)
{
	printf("Strings: %s\n", ft_split("Hola buenos dias, que tal estas?", " "));
	return (0);
}*/


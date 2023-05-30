/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 22:47:06 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/27 22:47:06 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*itoa(), viene de la expresión "integer to ascii", del inglés. Y la función que 
realiza la operación contraria, "ascii to integer" es atoi().

Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.

Esta función se utiliza para convertir un valor numérico en una cadena de texto, 
es decir, que permite convertir un número entero en un texto. La cadena contendrá 
tantos carácteres como dígitos tenga el resultado.
El parámetro base especifica la base utilizada para convertir el valor, esta deberá
ser entre 2 y 36, inclusive.

Parámetros:
n – Valor que se va a convertir en una string.
buffer – Array para almacenar la string resultante terminada en nulo.
base – Base numérica utilizada para representar el valor como una string, entre 2 y 36.

Valor de retorno:
Un puntero a la string resultante terminada en cero, igual que el búfer de parámetros.*/

#include "libft.h"

static int	ft_digit_count(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)//verificar si entra en este bucle cuanso es - a 0 y ha pasado por if
	{
		i /= 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nb;

	nb = n;//para hacerlo long int
	len = ft_digit_count(nb);
	if (!(str = malloc(i * sizeof(char) + 1)))//diferente a null
		return (0);
	str[len--] = 0;//no entiendo
	if (nb == 0)
	{
		str = ft_calloc(2, sizeof(char));
		str[0] = 48;
	}
	if (nb < 0)//numberos negativos
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)//numeros positivos
	{
		str[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

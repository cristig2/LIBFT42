/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 22:47:06 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/02 12:34:26 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*itoa(), viene de la expresión "integer to ascii". Esta función se utiliza para
convertir un valor numérico en una string, es decir, que permite convertir un 
número entero en un texto. La string contendrá tantos carácteres como dígitos 
tenga el resultado. Devolverá un puntero a la string resultante terminada en 
cero, igual que el búfer de parámetros.

Parámetros:
n – Valor que se va a convertir en una string.
str – Array para almacenar la string resultante terminada en nulo.
nb – Base numérica utilizada para representar el valor como una string, de 2-36.
El parámetro base especifica la base utilizada para convertir el valor, esta 
deberá ser entre 2 y 36, inclusive.

Primero realizo una función auxiliar ft_digit_count(int i), que toma un número 
entero y devuelve la longitud de su representación en string de caracteres. 
Luego, la función ft_itoa(int n) reserva la memoria necesaria para la string de 
caracteres resultante y comienza a construir la string.
Si el número es negativo, se añade un signo menos al inicio de la string y el 
número se convierte en su valor absoluto. Luego, se calcula cada dígito del 
número de derecha a izquierda y se agrega a la string de caracteres. Finalmente,
se devuelve la string de caracteres resultante.*/

#include "libft.h"

static int	ft_digit_count(int i)
{
	int	count;

	count = 0;
	if (i <= 0)
	{
		i = i * -1;
		count++;
	}
	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long int	nb;

	nb = n;
	len = ft_digit_count(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
		str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}

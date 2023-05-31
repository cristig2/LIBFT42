/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 22:47:06 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/31 12:36:01 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*itoa(), viene de la expresión "integer to ascii".
Esta función se utiliza para convertir un valor numérico en una cadena de 
texto, es decir, que permite convertir un número entero en un texto. La cadena
contendrá tantos carácteres como dígitos tenga el resultado.
El parámetro base especifica la base utilizada para convertir el valor, esta 
deberá ser entre 2 y 36, inclusive.

Parámetros:
n – Valor que se va a convertir en una string.
str – Array para almacenar la string resultante terminada en nulo.
nb – Base numérica utilizada para representar el valor como una string, 
entre 2-36.

Valor de retorno:
Un puntero a la string resultante terminada en cero, 
igual que el búfer de parámetros.

Linea(66)Se define el byte final que sera len -1*/

#include "libft.h"

static int	ft_digit_count(long i)
{
	size_t	count;

	count = 0;
	if (i == 0)
	{
		count++;
		return (count);
	}
	if (i < 0)
	{
		i = i * -1;
		count++;
	}
	while (i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nb;

	nb = n;
	len = ft_digit_count(n);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len--] = 0;
	if (n == 0)
		str[0] = '0';
	if (nb < 0)//numberos negativos
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)//numeros positivos
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}
/*
int main(void)
{
    int num = 123;
    char *str = ft_itoa(num);
    printf("Número: %d\\n", num);
    printf("Cadena: %s\\n", str);
    free(str);
    return 0;
}*/

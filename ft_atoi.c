/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:35:07 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:35:07 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Esta función se usa para convertir una string en un entero (de char a int).
Escanea la string, omite los caracteres en blanco anteriores (como espacios,
sangría de tabulación...), no inicia la conversión hasta que encuentra un número
o un signo, y luego si encuentra un non-number o la conversión termina ('\ 0'),
se devuelve el resultado.
Devuelve el entero convertido; si “str” no se puede convertir a int o “str” es
una cadena vacía, se devolverá 0.*/
/*
1. Espacios en blanco
2. Signos negativos
3. Conversión de char a int
*/

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = sign * -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	printf("Cadena a entero: %d\n", ft_atoi("8n6es"));
	return (0);
}*/

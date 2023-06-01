/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:35:07 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 10:21:05 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Esta función se usa para convertir una string en un entero (de char a int).
Escanea la string, omite los caracteres en blanco (como espacios,tabulacuines,
enters...), no inicia la conversión hasta que encuentra un número o un signo -,
y luego si encuentra un non-number o la conversión termina ('\ 0'), se devuelve
el entero convertido; si “str” no se puede convertir a int o “str” es una string
vacía, se devolverá 0.*/

#include "libft.h"

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
	char str[] = "12c45";
    int num = ft_atoi(str);
	printf("Cadena: %s\n", str);
	printf("De cadena a entero: %d\n", num);
	return (0);
}
*/
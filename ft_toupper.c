/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:31:32 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/15 13:02:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convierte el carácter en mayúscula si es minúscula.
Devuelve el valor del carácter ya cambiado.*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c -32;
	}
	return (c);
}
/*
int	main(void)
{
	printf("Caracter en mayuscula: %d\n", ft_isalpha(h));
	return (0);
}*/
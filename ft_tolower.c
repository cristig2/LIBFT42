/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:11:33 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/15 13:02:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convierte el caracter en minuscula si es mayuscula.
Devuelve el valor del caracter ya cambiado*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c +32;
	}
	return (c);
}
/*
int	main(void)
{
	printf("Caracter en minuscula: %d\n", ft_(H));
	return (0);
}*/
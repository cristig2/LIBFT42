/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:32:41 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 11:37:13 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indica si el carácter que le introducimos en el arg es alfanumerico.
Devuelve un valor distinto a 0, si el valor está entre 0-9, a-z o A-Z.*/

#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg >= 65 && arg <= 90) || (arg >= 97 && arg <= 122)
		|| (arg >= 48 && arg <= 57))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("Valor del caracter: %i\n", ft_isalnum(1));
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:45:58 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/15 12:03:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indica si el carácter que le introducimos en el arg es alfanumerico.
Devuelve un valor distinto a 0, si el valor está entre 0-9, a-z o A-Z.*/

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
	printf("Valor del caracter: %d\n", ft_isalnum(c));
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:10:10 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/15 12:46:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indica si el caracter es numerico.
Devuelve un valor distinto a 0 si el valor esta entre 0-9.*/

int	ft_isdigit(int arg)
{
	if (arg >= 48 && arg <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("Valor del caracter: %d\n", ft_isalpha(4));
	return (0);
}*/
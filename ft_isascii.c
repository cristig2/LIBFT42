/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:12:23 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/15 12:52:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indica si el caracter ascii esta entre el 0-127.
Devuelve un valor distinto de 0, si el valor es un caracter entre 0-127*/

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("Valor del caracter: %d\n", ft_isalpha(4));
	return (0);
}*/

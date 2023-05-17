/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:33:44 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:33:48 by crgallar         ###   ########.fr       */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:35:38 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:35:42 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indica si el caracter es ascii imprimible.
Devuelve un valor distinto a 0, si el valor es ascii imprimible*/
int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("Caracter imprimible: %d\n", ft_isprint(?));
	return (0);
}*/
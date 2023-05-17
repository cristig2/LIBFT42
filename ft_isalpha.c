/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:33:30 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 19:33:30 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indica si el carácter que le introducimos en el arg es alfabético.
Devuelve un valor distinto a 0, si el valor está entre a-z o A-Z.*/

int	ft_isalpha(int arg)
{
	if ((arg >= 65 && arg <= 90) || (arg >= 97 && arg <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("Valor del caracter: %d\n", ft_isalpha(4));
	return (0);
}*/
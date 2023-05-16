/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:23:35 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/15 12:53:38 by marvin           ###   ########.fr       */
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
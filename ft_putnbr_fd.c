/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:48:20 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 13:06:11 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Envía el número "n" al file descriptor especificado. No devuelve nada.*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nc;

	nc = n;
	if (nc < 0)
	{
		ft_putchar_fd('-', fd);
		nc = nc * -1;
	}
	if (nc > 9)
	{
		ft_putnbr_fd(nc / 10, fd);
		ft_putchar_fd((nc % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nc + '0', fd);
}

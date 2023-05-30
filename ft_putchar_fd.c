/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:01:59 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/30 13:25:26 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Envía el carácter "c" al file descriptor especificado. No devuelve nada.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

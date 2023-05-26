/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:01:59 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/26 09:59:24 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Envía el carácter "c" al file descriptor especificado. No devuelve nada.
	c: El carácter a enviar.
	fd: El file descriptor sobre el que escribir.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
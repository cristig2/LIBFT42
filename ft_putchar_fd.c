/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:01:59 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 20:01:59 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Envía el carácter "c" al file descriptor especificado. No devuelve nada.
	c: El carácter a enviar.
	fd: El file descriptor sobre el que escribir.
*/

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

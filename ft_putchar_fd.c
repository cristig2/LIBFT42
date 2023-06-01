/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:01:59 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 13:05:45 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escribe un carácter "c" al file descriptor especificado "fd". 
No devuelve nada.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

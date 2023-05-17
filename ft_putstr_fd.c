/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 23:31:54 by crgallar          #+#    #+#             */
/*   Updated: 2023/05/17 23:31:54 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Envía la string "s" al file descriptor especificado y no deuelve nada.
    s: La string a enviar.
    fd: El file descriptor sobre el que escribir.*/

void ft_putstr_fd(char *s, int fd)
{
    write (fd, s, ft_strlen(s));
}

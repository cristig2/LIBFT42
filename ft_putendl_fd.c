/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:14:10 by crgallar          #+#    #+#             */
/*   Updated: 2023/06/01 13:05:55 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Envía la string "s" al file descriptor especificado. Seguido de un salto de 
linea. No devuelve nada.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		len;
	char	slt;

	len = ft_strlen(s);
	slt = '\n';
	write (fd, s, len);
	write (fd, &slt, 1);
}

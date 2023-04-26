/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crgallar <crgallar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:20:55 by crgallar          #+#    #+#             */
/*   Updated: 2023/04/24 16:48:34 by crgallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>
# include <locale.h>

int	ft_isalpha(int arg);
int	ft_isdigit(int arg);
int	ft_isalnum(int arg);
int	ft_isascii(int arg);
int	ft_isprint(int arg);
int	ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*strchr(const char *s, int c);

#endif
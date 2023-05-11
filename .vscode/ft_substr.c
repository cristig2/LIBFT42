/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 09:15:56 by marvin            #+#    #+#             */
/*   Updated: 2023/05/10 09:15:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_substr() Reserva (con malloc(3)) y devuelve una substring de la string 's'.
La substring empieza desde el índice 'start' y tiene una longitud máxima 'len'.
s: La string desde la que crear la substring.
start: El índice del caracter en 's' desde el que empezar la substring.
len: La longitud máxima de la substring.
Devuelve la substring resultante o NULL si falla la reserva de memoria.
*/

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *dest;
    int i;

    // Si la string de s esta vacia
    if (!s)
		return (0);
    // obtener la longitud de la string de destino
    i = len - start;
    // asignar (len + 1) caracteres para destino (+1 para carácter nulo adicional)
    dest = (char*)malloc(sizeof(char) * (tem + 1));
    // comienza con m-ésimo carácter y copia los caracteres `len` en el destino
    strncpy(dest, (s + start), tem);
    // devuelve la string de destino
    return dest;
}
 
int main()
{
    printf("%s\n", ft_substr());
    return (0);
}
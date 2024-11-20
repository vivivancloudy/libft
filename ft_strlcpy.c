/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:03:44 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/20 17:18:56 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    src_length;

    i = 0;
    src_length = 0;
    while (src[src_length] != 0)
        src_length++;
    if (size > 0)
    {
        while (src[i] != 0 && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = 0;
    }
    return (src_length);
}
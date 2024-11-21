/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:01:21 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/11 15:34:49 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	char				*d;
	const char			*s;

	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src1[] = "abcdefghijk";
	char src2[] = "abcdefghijk";
	char dest1[20];
	ft_memcpy(src1, src1 + 2, 6);
	// printf("Source: %s\n", src);
	// printf("Destination after ft_memcpy: ");
	
	char dest2[10];
    memcpy(src2, src2 + 2 , 6);
	//memmove(src2 + 1, src2, 5);
	// ft_memmove(src2, src2 + 2, 6);
	// ft_memcpy(src2, src2 + 2, 6);
    printf("Array src1: %s\n", src1);
    printf("Array src2: %s\n", src2);

	// ft_memmove(src, src + 2, 6);
	// printf("Source: %s\n", src);
	// printf("Destination after ft_memmove: ");

	
	return (0);
}

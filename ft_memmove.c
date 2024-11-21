/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:28:47 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/12 12:10:27 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (d > s)
	{
		while (n -- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
			d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	//Example 1: Non- overlapping
	char	src1[] = "Hello World";
	char dest1[12];
	printf("Src1: %s\n", src1);

	ft_memmove(dest1, src1, sizeof(src1));
	printf("Dest: %s\n", dest1);

	//Example 2: Overlapping
	char	src2[] = "0123456789";
	printf("Src2: %s\n", src2);
	ft_memmove(src2 + 4, src2, 6);
	printf("Source overlap: %s\n", src2);

	return (0);
}*/

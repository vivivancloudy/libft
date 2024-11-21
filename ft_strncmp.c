/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:43:51 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/13 13:16:36 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
	
int	main(void)
{
	char s1[] = "Hello a";
	char s2[] = "Hello b";
	int	result;
	printf("%d\n", ft_strncmp(s1, s2, 6));
	result = strncmp(s1, s2, 6);
	printf("%d\n", result);
	printf("%d\n", ft_strncmp(s1, s2, 11));
	result = strncmp(s1, s2, 11);
	printf("%d\n", result);
}*/

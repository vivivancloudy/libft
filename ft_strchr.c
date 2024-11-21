/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:18:52 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/12 15:03:46 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char) c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
        const char str[] = "Hello world";
        int     i = 'w';

        char *result = ft_strchr(str, i);
        if (result)
            printf("Found character: %s\n", result);
        else
            printf("Character not found\n");

        result = strchr(str, i);
        if (result)
            printf("Found character (strchr): %s\n", result);
        else
            printf("Character not found (strchr)\n");

        return 0;
}*/

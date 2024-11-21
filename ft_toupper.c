/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:53:02 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/11 11:55:31 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*#include <stdio.h>
int main(void)
{
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));
    printf("ft_toupper('z') = %c\n", ft_toupper('z'));
    printf("ft_toupper('A') = %c\n", ft_toupper('A'));
    printf("ft_toupper('Z') = %c\n", ft_toupper('Z'));
    printf("ft_toupper('1') = %c\n", ft_toupper('1'));
    printf("ft_toupper(' ') = %c\n", ft_toupper(' '));
    printf("ft_toupper('@') = %c\n", ft_toupper('@'));
    return 0;
}*/

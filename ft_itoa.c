/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:14:38 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/15 12:34:33 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_length(int n)
{
	long	num;
	int	len;
	long	temp;

	num = n;
	if (n <= 0)
		len = 1;
	else
		len = 0;
	temp = num;
	if (num < 0)
		num = - num;	
	while (temp)
	{
		len++;
		temp /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int	len;
	
	num = n;
	len = get_num_length(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
		num = -num;
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int	main(void)
{
	int	n = 12445687;
	printf("%s\n", ft_itoa(n));
	return (0);
}

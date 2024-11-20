/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:38:28 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/20 17:24:00 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    char    *str;

    start = 0;
    end = ft_strlen(s1);
    if (!s1 || !set)
        return (NULL);
    while (ft_strchr(set, s1[start]) && s1[start]) 
        start++;
    while (ft_strrchr(set, s1[end - 1]) && end > start)
        end--;
    str = malloc(end - start + 1);
    if (!str)
        return (NULL);
    ft_strlcpy(str, s1 + start, end - start + 1);
    return (str);
}

int main(void)
{
    char const *str = "     trim this    ";
    char const *set = " ";
    printf("%s\n", ft_strtrim(str, set));
}
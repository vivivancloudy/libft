/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:17:47 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/21 12:08:40 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numwords(char const *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			num++;
		i++;
	}
	return (num);
}

static int	split_words(char **result, char const *s, char c, int word_index)
{
	int	start;
	int	end;

	start = 0;
	end = 0;
	while (s[end])
	{
		if (s[end] == c || s[end] == '\0')
			start = end + 1;
		if (s[end] != c && (s[end + 1] == c || s[end + 1] == '\0'))
		{
			result[word_index] = malloc(sizeof(char) + (end - start + 2));
			if (!result[word_index])
			{
				while (word_index++)
					free(result[word_index]);
				return (0);
			}
			ft_strlcpy(result[word_index], (s + start), end - start + 2);
			word_index++;
		}
		end++;
	}
	result[word_index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (numwords(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c, 0))
		return (NULL);
	return (result);
}

/*int	main(void)
{
	char const *str = "xin chao moi nguoi";
	char c = ' ';
	char	**words = ft_split(str,c);
	if (words)
	{
		int	i = 0;
		while (words[i])
		{
			printf("%d:%s\n", i + 1, words[i]);
			free(words[i]);
			i++;
		}
		free(words);
	}
	return (0);
}*/

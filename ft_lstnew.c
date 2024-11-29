/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:44:42 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/29 14:06:36 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int main (void)
{
    t_list  *node;
    char    *content = "Hello World";

    node = ft_lstnew(content);
    if (node)
    {
        printf("Node content: %s\n", (char *)node->content);
        free(node);
    }
    else
    {
        printf("failed\n");
    }
    return (0);
}*/

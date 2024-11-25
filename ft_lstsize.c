/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdinh <thdinh@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:24:32 by thdinh            #+#    #+#             */
/*   Updated: 2024/11/25 15:23:28 by thdinh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst)
    {
        count++;
        lst = lst->next;        
    }
    return (count);
}

/*int main(void)
{
    t_list  *list = NULL;
    t_list  *new_node1 = ft_lstnew("Node 1");
    t_list  *new_node2 = ft_lstnew("Node 2");
    t_list  *new_node3 = ft_lstnew("Node 3");

    ft_lstadd_front(&list, new_node1);
    ft_lstadd_front(&list, new_node2);
    ft_lstadd_front(&list, new_node3);

    int size = ft_lstsize(list);
    printf("List size: %d\n", size);

    free(new_node1);
    free(new_node2);
    free(new_node3);
    return (0);
}*/
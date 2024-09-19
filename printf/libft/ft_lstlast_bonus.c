/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:39:17 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 23:43:55 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*static void safe_free(void *ptr)
{
    if (ptr)
        free(ptr);
}

int main(void)
{
    t_list *list = NULL;
    t_list *node1 = NULL;
    t_list *node2 = NULL;
    t_list *node3 = NULL;
    t_list *last = NULL;

    last = ft_lstlast(list);
    if (last == NULL)
        ft_putstr_fd("Test case 1 (Empty list): Passed\n", 1);
    else
        ft_putstr_fd("Test case 1 (Empty list): Failed\n", 1);

    node1 = ft_lstnew(ft_strdup("First"));
    if (node1 == NULL)
    {
        ft_putstr_fd("Memory allocation failed\n", 2);
        return (1);
    }
    list = node1;
    last = ft_lstlast(list);
    if (last == node1)
        ft_putstr_fd("Test case 2 (One element): Passed\n", 1);
    else
        ft_putstr_fd("Test case 2 (One element): Failed\n", 1);

    node2 = ft_lstnew(ft_strdup("Second"));
    node3 = ft_lstnew(ft_strdup("Third"));
    if (node2 == NULL || node3 == NULL)
    {
        ft_putstr_fd("Memory allocation failed\n", 2);
        ft_lstclear(&list, safe_free);
        safe_free(node2);
        safe_free(node3);
        return (1);
    }
    node1->next = node2;
    node2->next = node3;
    last = ft_lstlast(list);
    if (last == node3)
        ft_putstr_fd("Test case 3 (Multiple elements): Passed\n", 1);
    else
        ft_putstr_fd("Test case 3 (Multiple elements): Failed\n", 1);

    ft_lstclear(&list, safe_free);

    return (0);
}*/
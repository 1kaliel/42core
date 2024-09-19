/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:55:30 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 23:56:55 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/**
 * @brief Deletes a single element of a linked list.
 *
 * This function deletes the element 'lst' and frees the memory of its content.
 *
 * @param lst The element to be deleted.
 * @param del The function used to delete the content of the element.
 *
 * @return void
 *
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (lst->content)
		del(lst->content);
	free(lst);
}

/*int main()
{
    char *content1 = ft_strdup("Hello World");
    t_list *list1 = ft_lstnew(content1);
    ft_lstdelone(list1, free);
    printf("Test 1: Element deleted\n");

    ft_lstdelone(NULL, free);
    printf("Test 2: NULL element handled\n");

    t_list *list2 = ft_lstnew(NULL);
    ft_lstdelone(list2, free);
    printf("Test 3: Element with NULL content deleted\n");

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:59:22 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/08 00:02:13 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/**
 * @brief Deletes and frees the memory of a linked list.
 *
 * This function deletes and frees the memory of the elements of the list
 *		by using the function 'del' to free the content of each element.
 *
 * @param lst A pointer to the first element of the list.
 * @param del The function used to free the content of each element.
 *
 * @return void
 *
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
/*int main()
{
    t_list *list = ft_lstnew(ft_strdup("Hello World"));
    t_list *list2 = ft_lstnew(ft_strdup("Hello World 2"));
    ft_lstadd_back(&list, list2);

    // Print the list before clearing
    printf("List before clearing:\n");
    t_list *current = list;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    ft_lstclear(&list, free);

    if (list == NULL)
    {
        printf("List cleared successfully.\n");
    }
    else
    {
        printf("List clearing failed.\n");
    }

    return 0;
}*/
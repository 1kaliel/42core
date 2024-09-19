/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:47:48 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 23:50:05 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Adds a new element at the end of a linked list.
 *
 * This function adds the element 'new' at the end of the list 'lst'.
 *
 * @param lst A pointer to the first element of the list.
 * @param new The new element to be added to the list.
 *
 * @return void
 *
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*int main()
{
    t_list *list1 = NULL;
    t_list *new1 = ft_lstnew("First");
    ft_lstadd_back(&list1, new1);
    printf("Test 1: %s\n", (char *)list1->content);

    t_list *new2 = ft_lstnew("Second");
    ft_lstadd_back(&list1, new2);
    printf("Test 2: %s\n", (char *)ft_lstlast(list1)->content);

    t_list *new3 = ft_lstnew("Third");
    ft_lstadd_back(&list1, new3);
    printf("Test 3: %s\n", (char *)ft_lstlast(list1)->content);

    t_list *list2 = ft_lstnew("lonely");
    t_list *new4 = ft_lstnew("new");
    ft_lstadd_back(&list2, new4);
    printf("Test 4: %s\n", (char *)ft_lstlast(list2)->content);

    ft_lstadd_back(&list2, NULL);
    printf("Test 5: %s\n", (char *)ft_lstlast(list2)->content);

    return 0;
}*/

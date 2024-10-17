/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:08:38 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 23:10:49 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Adds a new element at the beginning of a linked list.
 *
 * This function adds the element 'new' at the beginning of the list 'lst'.
 *
 * @param lst A pointer to the first element of the list.
 * @param new The new element to be added to the list.
 *
 * @return void
 *
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main()
{

    t_list *list1 = NULL;
    t_list *new1 = ft_lstnew("First");
    ft_lstadd_front(&list1, new1);
    printf("Test 1: %s\n", (char *)list1->content);

    t_list *new2 = ft_lstnew("Second");
    ft_lstadd_front(&list1, new2);
    printf("Test 2: %s -- ", (char *)list1->content);
    printf("%s\n", (char *)list1->next->content);

    t_list *new3 = ft_lstnew("Third");
    ft_lstadd_front(&list1, new3);
    printf("Test 3: %s -- ", (char *)list1->content);
    printf("%s -- ", (char *)list1->next->content);
    printf("%s\n", (char *)list1->next->next->content);

    t_list *list2 = ft_lstnew("lonely");
    t_list *new4 = ft_lstnew("new");
    ft_lstadd_front(&list2, new4);
    printf("Test 4: %s -- ", (char *)list2->content);
    printf("%s\n", (char *)list2->next->content);

    ft_lstadd_front(&list2, NULL);
    printf("Test 5: %s -- ", (char *)list2->content);
    printf("%s\n", (char *)list2->next->content);

    return 0;
}*/
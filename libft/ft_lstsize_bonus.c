/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:20:53 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 23:22:41 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Calculates the size of a linked list.
 *
 * @param lst The pointer to the head of the linked list.
 * @return The number of elements in the linked list.
 */
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int main()
{
    t_list *list = ft_lstnew("Hello World");
    if (list)
    {
        printf("List content: %s\n", (char *)list->content);
        printf("List size: %d\n", ft_lstsize(list));
        printf("List created successfully.\n");
        free(list);
    }
    else
    {
        printf("Failed to create list.\n");
    }
    return 0;
}*/
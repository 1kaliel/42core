/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 23:00:30 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/07 23:01:28 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * Creates a new linked list node with the given content.
 *
 * @param content The content to be stored in the node.
 * @return A pointer to the newly created node.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*int main()
{
    t_list *list = ft_lstnew("Hello World");
    if (list)
    {
        printf("List content: %s\n", (char *)list->content);
        printf("List created successfully.\n");
        free(list);
    }
    else
    {
        printf("Failed to create list.\n");
    }
    return 0;
}*/
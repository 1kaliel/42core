/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:11:46 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/08 00:13:31 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/**
 * @brief Creates a new node for a linked list.
 *
 * This function creates a new node for a linked list with the given content.
 * If the creation of the node fails, the provided del function is called to
 * free the content.
 *
 * @param content The content to be stored in the node.
 * @param del The function used to free the content in case of failure.
 * @return A pointer to the newly created node, or NULL if the creation fails.
 */
static t_list	*create_node(void *content, void (*del)(void *))
{
	t_list	*node;

	node = ft_lstnew(content);
	if (!node)
	{
		del(content);
	}
	return (node);
}

/**
 * @brief Applies a function to each element of a linked list and creates a 
 * new list with the results.
 *
 * This function iterates over each element of the given linked list `lst` 
 * and applies the function `f` to each element's content.
 * The function `f` should take a void pointer as input and return a 
 * void pointer as output.
 * The resulting content is used to create a new node in the new list.
 * If any of the parameters `lst`, `f`, or `del` is NULL, 
 * the function returns NULL.
 * The `del` function is used to free the memory of each 
 * element's content in case of an error.
 * If memory allocation fails during the creation of a new node, 
 * the function frees the memory of the new list and returns NULL.
 *
 * @param lst The linked list to be mapped.
 * @param f The function to be applied to each element's content.
 * @param del The function used to free the memory of each 
 *             element's content in case of an error.
 * @return The new linked list with the results of applying 
 *          the function to each element's content, or NULL if any 
 *           parameter is NULL or memory allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	content = f(lst->content);
	new = create_node(content, del);
	if (!new)
		return (NULL);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		content = f(lst->content);
		tmp->next = create_node(content, del);
		if (!tmp->next)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (new);
}
/**
 * @brief Doubles the content of a given pointer.
 *
 * This function takes a pointer to content and doubles its value. It allocates 
 * memory for the result and returns a pointer to it.
 *
 * @param content A pointer to the content to be doubled.
 * @return A pointer to the doubled content, or NULL if memory allocation fails.
 */
/*static void *double_content(void *content)
{
    int *num = (int *)content;
    int *result = (int *)malloc(sizeof(int));
    if (result)
        *result = *num * 2;
    return result;
}*/

/**
 * @brief Free the memory allocated for the content of a linked list node.
 *
 * This function is used as a callback to free the memory 
 * allocated for the content of a linked list node. It takes a void 
 * pointer as input, which should point to the
 * content to be freed. The function uses the 
 * `free` function from the C standard library to deallocate the memory.
 *
 * @param content A pointer to the content to be freed.
 */
/*static void free_content(void *content)
{
    free(content);
}*/

/**
 * @brief Prints the content of a linked list.
 *
 * This function iterates through the linked list and 
 * prints the content of each node.
 * The content is assumed to be of type `int*`.
 *
 * @param list A pointer to the head of the linked list.
 */
/*static void print_list(t_list *list)
{
    while (list)
    {
        ft_putnbr_fd(*(int *)list->content, 1);
        ft_putchar_fd(' ', 1);
        list = list->next;
    }
    ft_putchar_fd('\n', 1);
}*/

/*int main(void)
{
    t_list *list = NULL;
    t_list *mapped_list = NULL;
    int *num;

    mapped_list = ft_lstmap(list, double_content, free_content);
    if (mapped_list == NULL)
        ft_putstr_fd("Test case 1 (Empty list): Passed\n", 1);
    else
        ft_putstr_fd("Test case 1 (Empty list): Failed\n", 1);

    for (int i = 1; i <= 5; i++)
    {
        num = (int *)malloc(sizeof(int));
        if (!num)
        {
            ft_lstclear(&list, free_content);
            ft_putstr_fd("Memory allocation failed\n", 2);
            return (1);
        }
        *num = i;
        ft_lstadd_back(&list, ft_lstnew(num));
    }

    ft_putstr_fd("Original list: ", 1);
    print_list(list);

    mapped_list = ft_lstmap(list, double_content, free_content);
    if (mapped_list)
    {
        ft_putstr_fd("Mapped list: ", 1);
        print_list(mapped_list);
        ft_putstr_fd("Test case 2 (Multiple elements): Passed\n", 1);
    }
    else
        ft_putstr_fd("Test case 2 (Multiple elements): Failed\n", 1);

    ft_lstclear(&list, free_content);
    ft_lstclear(&mapped_list, free_content);

    return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucguima <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 00:09:03 by lucguima          #+#    #+#             */
/*   Updated: 2024/09/08 00:10:14 by lucguima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/**
 * Iterates the list 'lst' and applies the function 'f' to each element.
 *
 * This function iterates the list 'lst' and applies the function 'f' to each
 * element of the list.
 *
 * @param lst The list to iterate.
 * @param f The function to apply to each element of the list.
 *
 * @return void
 *
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	ft_putstr(void *content)
{
    if (content == NULL)
    {
        write(1, "(null)\n", 7);
        return ;
    }
    char *str = (char *)content;
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int main()
{
    char *content1 = ft_strdup("Hello World");
    char *content2 = ft_strdup("Hello World 2");
    t_list *list1 = ft_lstnew(content1);
    t_list *list2 = ft_lstnew(content2);
    ft_lstadd_back(&list1, list2);
    ft_lstiter(list1, &ft_putstr);
    ft_lstdelone(list1, free);
    ft_lstdelone(list2, free);
    write(1, "Test 1: Normal case passed\n", 27);

    char *content3 = ft_strdup("Single Element");
    t_list *list3 = ft_lstnew(content3);
    ft_lstiter(list3, &ft_putstr);
    ft_lstdelone(list3, free);
    write(1, "Test 2: Single element case passed\n", 35);

    ft_lstiter(NULL, &ft_putstr);
    write(1, "Test 3: Empty list case passed\n", 31);

    t_list *list4 = ft_lstnew(NULL);
    ft_lstiter(list4, &ft_putstr);
    ft_lstdelone(list4, free);
    write(1, "Test 4: Element with NULL content case passed\n", 46);

    return 0;
}*/

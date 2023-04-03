/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:45:51 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/03 23:02:18 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
//Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo,
// utilizando la función ’del’ y free(3). Al final, el puntero a la lista 
// debe ser NULL.

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (*lst)
	{
		while ((*lst)->next)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
}
/*
static void del(void *lst)
{
    free(lst);
}

void	printlist(t_list *head)
{
	if (!head)
		return ;
	printf("%s\n", (char *) head->content);
	printlist(head->next);
}

int	main(void)
{
	t_list *head;
	t_list *n1;
	t_list *n2;

	head = ft_lstnew((char *) "a");
	n1 = ft_lstnew((char *) "b");
	n2 = ft_lstnew((char *) "c");

	head->next = n1;
	n1->next = n2;
	printlist(head);
	ft_lstclear(&head, del);
	printlist(head);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 00:14:24 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/02 00:53:54 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
//Añade el nodo ’new’ al principio de la lista ’lst’.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	**list;
	t_list	*node;
	t_list	*new;

	node = ft_lstnew("Hola");
	new = ft_lstnew("Adios");
	*list = node;
	printf("%s\n", (*list)->content);
	ft_lstadd_front(list, new);
	printf("%s\n", (*list)->content);
	printf("%s\n", (*list)->next->content);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:43:19 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/03 22:25:20 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
//Toma como parámetro un nodo ’lst’ y libera la memoria del contenido utilizando
//la función ’del’ dada como parámetro, además de liberar el nodo. La memoria 
//de ’next’ no debe liberarse.

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
		del(lst->content);
	free(lst);
}
/*
static void	ft_del(void *lst)
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
	t_list	**lst;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;

	lst1 = ft_lstnew("Rota y recompuesta");
	lst2 = ft_lstnew("Amanece que no es poco");
	lst3 = ft_lstnew("¡Pum para arriba!");
	lst4 = ft_lstnew("A vivir que son dos dias...");
	lst1->next = NULL;
	*lst = NULL;
	ft_lstadd_back(lst, lst1);
	ft_lstadd_back(lst, lst2);
	ft_lstadd_back(lst, lst3);
	ft_lstadd_back(lst, lst4);
	ft_lstdelone(lst2, ft_del);
	while (*lst)
	{
		printf("%s\n", (*lst)->content);
		*lst = (*lst)->next;
	}
	return (0);
}
*/

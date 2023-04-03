/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviles- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 00:06:31 by daviles-          #+#    #+#             */
/*   Updated: 2023/04/02 00:12:37 by daviles-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
//Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ se
// inicializa con el contenido del parámetro ’content’. La variable ’next’, 
// con NULL.

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *) malloc (sizeof (t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
/*
int	main(void)
{
	t_list	*list;
	void	*content;

	content = "Hlaosa";
	list = ft_lstnew(content);
	printf("%s\n", list->content);
	return (0);
}
*/

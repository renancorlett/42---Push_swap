/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:27:01 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 16:00:00 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

//Apaga toda a lista

void	del(void *content)
{
	free(content);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*allnode;
	t_list	*nextnode;

	if (lst == NULL || *lst == NULL)
		return ;
	allnode = *lst;
	while (allnode != NULL)
	{
		nextnode = allnode->next;
		del(allnode->content);
		free(allnode);
		allnode = nextnode;
	}
	*lst = nextnode;
}

/*#include <stdio.h>
#include "ft_lstnew.c"
#include "ft_strdup.c"
#include "ft_lstadd_front.c"
int	main(void)
{
	t_list	*list = ft_lstnew(ft_strdup("tangerina"));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("laranja")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("goiaba")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("uva")));
	printf("\nAntes de retirar da lista:\n");
	t_list *temp = list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&list, del);
	printf("\nLista depois da retirada:");
	if (list == NULL)
	{
		printf("\nLista vazia!\n");
	}
	
	return (0);
}*/

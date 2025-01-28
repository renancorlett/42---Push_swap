/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:29:48 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 15:51:45 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//O objetivo dela é aplicar uma função a cada elemento de uma lista encadeada, 
//criando uma nova lista com os resultados. E excluindo se necessario.

/*void	del_node(void *content)
{
	free(content);
}

void	*ft_strtemp(void *s)
{
	char *c;
	
	c = (char *)s;
	while (*c) 
	{
		if (*c >= 'a' && *c <= 'z')
				*c -= 32;
		c++; 
	}
	return (s);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*#include <stdio.h>
#include "ft_lstclear.c"
#include "ft_strdup.c"
#include "ft_lstadd_back.c"
#include "ft_lstnew.c"
#include "ft_lstadd_front.c"

int	main(void)
{
	t_list	*list = ft_lstnew(ft_strdup("picanha"));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("feijao")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("arroz")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("macarrao")));
	printf("\nLista antes:\n");
	t_list *temp = list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	t_list	*new_list = ft_lstmap(list, ft_strtemp, del_node);
	printf("\nLista nova:\n");
	temp = new_list;
	while (temp)
	{
		printf("%s\n", (char *) temp->content);
		temp = temp->next;
	}
	return (0);
}*/

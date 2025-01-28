/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:32:55 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 15:58:36 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	del(void *content)
{
	free(content);
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
#include "ft_lstnew.c"
#include "ft_strdup.c"
#include "ft_lstadd_front.c"
int	main(void)
{
	t_list	*list = ft_lstnew(ft_strdup("goiaba"));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("uva")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("jamelao")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("pera")));
	printf("\nAntes de retirar da lista:\n");
	t_list *temp = list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	t_list	*del_lst = list;
	list = list->next;
	ft_lstdelone(del_lst, del);
	printf("\nLista depois da retirada:\n");
	while (list)
	{
		printf("%s\n", (char *) list->content);
		list = list->next;
	}
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:25:36 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 16:02:54 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}
/*
#include <stdio.h>
#include "ft_lstnew.c"
int	main(void)
{
	t_list	*list = ft_lstnew("picanha");
	ft_lstadd_back(&list, ft_lstnew("feijao"));
	ft_lstadd_back(&list, ft_lstnew("arroz"));
	ft_lstadd_back(&list, ft_lstnew("macarrao"));
	while (list)
	{
		printf("%s\n", (char *) list->content);
		list = list->next;
	}
	return (0);
}*/

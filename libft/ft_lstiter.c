/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:38:26 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 15:56:40 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_strtemp(void *s)
{
	char *c;
	
	c = (char *)s;
	while (*c) 
	{
		if (*c >= 'a' && *c <= 'z')
				*c -= 32;
		c++; 
	}
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	if (lst == NULL)
		return ;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
/*
#include <stdio.h>
#include "ft_lstnew.c"
#include "ft_lstadd_front.c"
#include "ft_strdup.c"
int	main(void)
{
	t_list	*list = ft_lstnew(ft_strdup("banana"));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("pera")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("melao")));
	ft_lstadd_front(&list, ft_lstnew(ft_strdup("manga")));
	printf("\nLista antes:\n");
	t_list *temp = list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	t_list	*lst = list;
	ft_lstiter(lst, ft_strtemp);
	printf("\nLista depois com a adição da função:\n");
	while (lst)
	{
		printf("%s\n", (char *) lst->content);
		lst = lst->next;
	}
	return (0);
}*/

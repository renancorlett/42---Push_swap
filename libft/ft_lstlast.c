/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:43:04 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 15:53:54 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*#include <stdio.h>
#include "ft_lstnew.c"
#include "ft_lstadd_front.c"
int	main(void)
{
	t_list	*list = ft_lstnew("picanha");
	ft_lstadd_front(&list, ft_lstnew("feijao"));
	ft_lstadd_front(&list, ft_lstnew("arroz"));
	ft_lstadd_front(&list, ft_lstnew("macarrao"));
	printf("%s\n",(char *) list->content);
	return (0);
}*/

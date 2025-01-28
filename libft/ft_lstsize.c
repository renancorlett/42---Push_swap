/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:19:02 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/07 15:45:27 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
	printf("%d\n", ft_lstsize(list));
	return (0);
}*/

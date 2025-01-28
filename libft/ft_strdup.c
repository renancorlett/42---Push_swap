/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:54:39 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/24 17:01:57 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = Duplicate a string;
//s	= Pointer to the string;
//if duplicates the string (SUCCESS).

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
		len++;
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strdup("Hi, 42!"));
	return (0);
}*/

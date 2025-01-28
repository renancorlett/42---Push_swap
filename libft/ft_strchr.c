/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:27:38 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/24 15:27:47 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = search for the last occurance of a character;
//c	= character to search for;
//s	= Pointer to the string to be searched;
//if returns the pointer for the last occurence of c (SUCCESS);
//if returns null (FAILURE).

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char *str = "Hello, world";
	printf("Result: %s\n", ft_strchr(str, 'H'));
	printf("Result: %s\n", ft_strchr(str, 'a'));
	printf("Result: %s\n", ft_strchr(str, '\0'));
	printf("Result: %s\n", ft_strchr(NULL, 'a'));
	return (0);
}*/

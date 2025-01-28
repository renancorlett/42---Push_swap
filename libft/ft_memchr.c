/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:49:18 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/22 12:14:56 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = Locates the first occurrence of c in the s;
//s	= Place in memory to search;
//c 	= Character to search;
//n	= Maximum number of bytes to search;
//if returns = 	SUCCESS(Pointer to the first occurrence of c in s);
//if returns = 	FAILURE(NULL).

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "Hello, world!";
	char *result;

	result = ft_memchr(str, 'e', 12);
	if (result)
		printf("Found 'e' at position: %ld\n", result - str);
	else
		printf("'e' not found in the first 12 bytes.\n");
	return (0);
}*/

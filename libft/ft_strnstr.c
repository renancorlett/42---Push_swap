/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:16:07 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/22 12:38:59 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = Search for the fist occurence of a substring;
//needle	= Pointer to the string to be searched;
//haystack	= Pointer to the string to search for;
//len	= length of the string;
//if returns pointer to the substring (SUCCESS).

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t	x;
	size_t	y;

	if (*needle == '\0')
		return ((char *)haystack);
	x = 0;
	while (haystack[x] && x < len)
	{
		y = 0;
		while ((x + y) < len
			&& haystack [x + y] == needle[y]
			&& needle [y]
			&& haystack [x + y])
		{
			y++;
		}
		if (needle[y] == '\0')
			return ((char *)&haystack[x]);
		x++;
	}
	return (NULL);
}

/*#include <stdio.h>
int main(void)
{
	const char *haystack = "Hello, 42!";
	const char *needle = "42";
	printf("Result: %s\n", ft_strnstr(haystack, needle, 10));
	printf("Result: %s\n", ft_strnstr(haystack, "z", 10));
	printf("Result: %s\n", ft_strnstr(haystack, "", 10));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:49:40 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/22 11:06:06 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = Appends size bytes from src to dest string;
//dest	= Pointer to the destination string;
//src	= Pointer to the source string;
//size	= Number of bytes to be appends;
//if returns numbers of bytes written (SUCCESS).

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)

{
	size_t	x;
	size_t	y;
	size_t	dest_len;
	size_t	src_len;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	x = dest_len;
	y = 0;
	while (src[y] && x < size - 1)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest_len + src_len);
}

/*#include <stdio.h>
int	main(void)
{
	char dest[20] = "Bom dia";
	printf("Final length: %zu\n", ft_strlcat(dest, " Portugal", 17));
	printf("Result: %s\n", dest);
	return (0);
}*/

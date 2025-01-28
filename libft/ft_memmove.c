/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:32:08 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/25 12:09:22 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// function = Moves n bytes from memory area src to memory area dest
// dest	= Pointer to the destination memory area
// src	= Pointer to the source memory area
// n	= Number of bytes to be copied
// if returns dest = SUCCESS(dest)

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)

{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s && d < s + n)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char src[] = "Raissa Curty";
	char dest[50];

	ft_memmove(dest, src, 12);
	printf("Final result without overlap = %s\n", dest);
	ft_memmove(src + 6, src, 6);
	printf("Final result with overlap = %s\n", src);
	return (0);
}*/

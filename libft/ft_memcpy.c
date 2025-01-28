/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:15:07 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/25 12:06:50 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// function = Copies n bytes from memory area src to memory area dest
// dest	= Pointer to the destination memory area
// src	= Pointer to the source memory area
// n	= Number of bytes to be copied
// if returns dest = SUCCESS(dest)

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char dest[20];
	ft_memcpy(dest, "Churrasco\n", 10);
	printf("Final result = %s\n", dest);
	return (0);
}*/

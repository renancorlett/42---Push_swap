/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:12:36 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/22 10:35:30 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = Copies size bytes from src to dest string;
//dest	= Pointer to the destination string;
//src	= Pointer to the source string;
//size_t	= Maximum number of bytes to be copied;
//if returns numbers of copied bytes (SUCCESS).

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*#include <stdio.h>
int	main(void)
{
	char dest[20];
	printf("Src lenght: %zu\n", ft_strlcpy(dest, "Bom dia Portugal", 17));
	printf("Result: %s\n", dest);
	return (0);
}*/

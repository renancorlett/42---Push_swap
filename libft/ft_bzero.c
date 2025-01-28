/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:02:48 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/24 17:00:01 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = Sets the first n bytes of the memory area pointed to by s to 0;
//s = memory area;
//n = number of bytes to be set to 0.

#include "libft.h"

void	ft_bzero(void *s, size_t n)

{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = '\0';
	}
}

/*#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char buffer[10] = "RenanSilva";
	ft_bzero(buffer, 5);
	for (int i = 0; i < 10; i++)
	{
		if (buffer[i] == '\0')
			printf("\\0");
		else
			printf("%c", buffer[i]);
	}
		printf("\n");
	return (0);
}*/

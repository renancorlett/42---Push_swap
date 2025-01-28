/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:40:30 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/23 10:01:53 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = Alloc memory for an array to the number of bytes sizes each;
//count	= Number of elements;
//s	= size of each element;
//Pointer allocated in memory (SUCCESS).

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	unsigned char	*ptr;
	size_t			total_size;
	size_t			i;

	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>
int	main(void)
{
	int	*arr;
	size_t count = 3;
	arr = (int *)ft_calloc(count, sizeof(int));
	if (!arr)
	{
		printf("Allocated memory fail.\n");
		return (1);
	}
	for (size_t i = 0; i < count; i++)
		printf("%d\n", arr[i]);
	free (arr);
	return (0);
}*/

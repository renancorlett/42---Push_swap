/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:30:57 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/25 12:14:26 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = compare the first number of bytes os s1 and s2;
//s1	= Pointer to the first string;
//s2	= Pointer to the second string;
//n	= Number the bytes to compare;

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < (n - 1) && (s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("Hello", "Hello", 5));
	printf("%d\n", ft_strncmp("Hello", "Hellp", 5));
	printf("%d\n", ft_strncmp("Hello", "Hell", 5));
	printf("%d\n", ft_strncmp("Hello", "Hello", 3));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:28:12 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/24 15:29:53 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence = NULL;

	while (*s)
	{
		if (*s == (unsigned char)c)
			last_occurrence = s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}

/*#include <stdio.h>
int main(void)
{
    const char *str = "Hi, 42!";
    printf("Result: %s\n", ft_strrchr(str, 'l'));
    printf("Result: %s\n", ft_strrchr(str, 'z')); //NULL
    printf("Result: %s\n", ft_strrchr(str, '\0'));
    return (0);
}*/

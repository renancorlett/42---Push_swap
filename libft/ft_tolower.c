/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:48:07 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/22 12:50:37 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = converts a character to uppercase

#include "libft.h"

int	ft_tolower(int c)

{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*#include <stdio.h>
int main(void)
{
	printf("return test1 = %c\n", ft_tolower('a'));
	printf("return test2 = %c\n", ft_tolower('z'));
	printf("return test3 = %c\n", ft_tolower('A'));
	printf("return test4 = %c\n", ft_tolower('3'));
	return (0);
}*/

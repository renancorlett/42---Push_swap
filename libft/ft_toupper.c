/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:40:39 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/22 12:47:38 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function = converts a character to uppercase

#include "libft.h"

int	ft_toupper(int c)

{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*#include <stdio.h>
int main(void)
{
	printf("return test1 = %c\n", ft_toupper('a'));
	printf("return test2 = %c\n", ft_toupper('z'));
	printf("return test3 = %c\n", ft_toupper('A'));
	printf("return test4 = %c\n", ft_toupper('3'));
	return (0);
}*/

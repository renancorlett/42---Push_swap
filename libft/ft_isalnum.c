/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:29:39 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/21 12:35:28 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("teste para a retorna = %d\n", ft_isalnum('a'));
	printf("teste para # retorna = %d\n", ft_isalnum('#'));
	printf("teste para 1 retorna = %d\n", ft_isalnum('1'));
	return (0);
}*/

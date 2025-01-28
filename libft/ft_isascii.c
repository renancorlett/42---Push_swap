/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:41:35 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/21 12:36:23 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("teste para p retorna = %d\n", ft_isascii(80));
	printf("teste para z retorna = %d\n", ft_isascii(127));
	printf("teste para p retorna = %d\n", ft_isascii(128));
	return (0);
}*/

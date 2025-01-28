/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:24:31 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/21 12:34:39 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("teste para '\\r' retorna = %d\n", ft_isprint('\r'));
	printf("teste para 1 retorna = %d\n", ft_isprint('1'));
	return (0);
}*/

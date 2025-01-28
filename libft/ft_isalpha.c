/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:09:16 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/25 11:28:21 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("teste para a retorna = %d\n", ft_isalpha('a'));
	printf("teste para Z retorna = %d\n", ft_isalpha('Z'));
	printf("teste para 1 retorna = %d\n", ft_isalpha('1'));
	return (0);
}*/

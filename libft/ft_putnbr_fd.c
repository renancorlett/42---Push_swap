/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:13:49 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/25 12:25:46 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	result;
	long	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num > 9)
		ft_putnbr_fd(num / 10, fd);
	result = (num % 10) + '0';
	write(fd, &result, 1);
}

/*#include <limits.h>
int main(void)
{
    ft_putnbr_fd(42, 1);    // Deve imprimir "42"
    ft_putnbr_fd(-42, 1);   // Deve imprimir "-42"
    ft_putnbr_fd(0, 1);     // Deve imprimir "0"
    ft_putnbr_fd(INT_MIN, 1); // Para testar o menor inteiro
    return (0);
}*/

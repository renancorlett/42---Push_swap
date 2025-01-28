/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_usual.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:16:41 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/04 11:24:15 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
		count += print_char(*str++);
	return (count);
}

int	print_nbr(int nbr)
{
	int		count;

	count = 0;
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		count += print_char('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		count += print_nbr(nbr / 10);
	count += print_char((nbr % 10) + '0');
	return (count);
}

int	print_unsigned(unsigned int nbr)
{
	int		count;

	count = 0;
	if (nbr > 9)
		count += print_unsigned(nbr / 10);
	count += print_char((nbr % 10) + '0');
	return (count);
}

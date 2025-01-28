/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_pointers_usual.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:25:25 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/04 12:08:20 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int num, int lowercase)
{
	int		count;
	char	*base;

	count = 0;
	if (lowercase)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
		count += print_hex(num / 16, lowercase);
	count += print_char(base[num % 16]);
	return (count);
}

int	print_pointer(unsigned long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += print_address(ptr);
	return (count);
}

int	print_address(unsigned long addr)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (addr >= 16)
		len += print_address(addr / 16);
	len += print_char(base[addr % 16]);
	return (len);
}

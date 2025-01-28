/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:28:00 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/04 11:40:53 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_arg(va_list args, char type)
{
	if (type == 'c')
		return (print_char(va_arg(args, int)));
	if (type == 's')
		return (print_str(va_arg(args, char *)));
	if (type == 'd' || type == 'i')
		return (print_nbr(va_arg(args, int)));
	if (type == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	if (type == 'x')
		return (print_hex(va_arg(args, unsigned int), 1));
	if (type == 'X')
		return (print_hex(va_arg(args, unsigned int), 0));
	if (type == 'p')
		return (print_pointer(va_arg(args, unsigned long)));
	if (type == '%')
		return (print_char('%'));
	return (0);
}

int	ft_printf(const char *argument, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, argument);
	count = 0;
	i = 0;
	while (argument[i])
	{
		if (argument[i] == '%' && argument[i + 1])
			count += print_arg(args, argument[++i]);
		else
			count += print_char(argument[i]);
		i++;
	}
	va_end(args);
	return (count);
}

/*#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	ft_count;
	int	std_count;

//Teste de caractere
	printf("Teste de caractere:\n");
	ft_count = ft_printf("%c\n", 'C');  // C
	std_count = printf("%c\n", 'C');    // C
	printf("ft_printf contou: %d caracteres\n", ft_count);  // 2
	printf("printf padrão contou: %d caracteres\n\n", std_count);  // 2

//Teste de string
	printf("Teste de string:\n");
	ft_count = ft_printf("%s\n", "Bom dia, Portugal!");  // Bom dia, Porgual!
	std_count = printf("%s\n", "Bom dia, Portugal!");    // Bom dia, Porgual!
	printf("ft_printf contou: %d caracteres\n", ft_count);  // 19
	printf("printf padrão contou: %d caracteres\n\n", std_count);  // 19

//Teste de inteiro com sinal
	printf("Teste de inteiro com sinal:\n");
	ft_count = ft_printf("%d\n", -135);  // -135
	std_count = printf("%d\n", -135);    // -135
	printf("ft_printf contou: %d caracteres\n", ft_count);  // 5
	printf("printf padrão contou: %d caracteres\n\n", std_count);  // 5

//Teste de inteiro sem sinal
	printf("Teste de inteiro sem sinal:\n");
	ft_count = ft_printf("%u\n", 246);  // 246
	std_count = printf("%u\n", 246);    // 246
	printf("ft_printf contou: %d caracteres\n", ft_count);  // 4
	printf("printf padrão contou: %d caracteres\n\n", std_count);  // 4

//Teste de hexadecimal minúsculo
	printf("Teste de hexadecimal minúsculo:\n");
	ft_count = ft_printf("%x\n", 204);  // cc
	std_count = printf("%x\n", 204);    // cc
	printf("ft_printf contou: %d caracteres\n", ft_count);  // 3
	printf("printf padrão contou: %d caracteres\n\n", std_count);  // 3

//Teste de hexadecimal maiúsculo
	printf("Teste de hexadecimal maiúsculo:\n");
	ft_count = ft_printf("%X\n", 204);  // CC
	std_count = printf("%X\n", 204);    // CC
	printf("ft_printf contou: %d caracteres\n", ft_count);  // 3
	printf("printf padrão contou: %d caracteres\n\n", std_count);  // 3

//Teste de ponteiro
	printf("Teste de ponteiro:\n");
	ft_count = ft_printf("%p\n", (void *)0x7ffeeaeb89c8);  // 0x7ffeeaeb89c8
	std_count = printf("%p\n", (void *)0x7ffeeaeb89c8);    // 0x7ffeeaeb89c8
	printf("ft_printf contou: %d caracteres\n", ft_count);  // 15
	printf("printf padrão contou: %d caracteres\n\n", std_count);  // 15

//Teste de percentual
	printf("Teste de caractere de percentual:\n");
	ft_count = ft_printf("%%\n");  // %
	std_count = printf("%%\n");    // %
	printf("ft_printf contou: %d caracteres\n", ft_count);  // 2
	printf("printf padrão contou: %d caracteres\n\n", std_count);  // 2
	
	return 0;
}*/

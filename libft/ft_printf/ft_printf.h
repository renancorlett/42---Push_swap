/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:37:14 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/04 10:57:57 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *argument, ...);
int	print_char(char c);
int	print_str(char *str);
int	print_nbr(int nbr);
int	print_unsigned(unsigned int nbr);
int	print_hex(unsigned int num, int lowercase);
int	print_pointer(unsigned long ptr);
int	print_address(unsigned long addr);

#endif

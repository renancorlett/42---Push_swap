/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:45:05 by rcorlett          #+#    #+#             */
/*   Updated: 2025/01/30 11:39:15 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		a_size;
	int		b_size;
	char	*join_args;
}				t_stacks;

void	rotate(int *array, int size, char *direction, char *list);
void	swap(char *str, int *array, int size);
void	push(char *str, t_stacks *stacks);
void	sort_three(t_stacks *stacks);
void	sort_small(t_stacks *stacks);
void	radix_sort(t_stacks *stacks);
void	parse_numbers(t_stacks *stacks);
void	create_index(t_stacks *stacks);
void	initialize_stacks(int ac, char **av, t_stacks *stacks);
void	free_and_exit(t_stacks *stacks, char *error_message);
void	check_sorted_or_duplicate(t_stacks *stacks, int i);
void	push(char *str, t_stacks *stacks);
int		is_sorted(t_stacks *stacks);
int		ft_atoi_ps(const char *n, t_stacks *stacks);

#endif

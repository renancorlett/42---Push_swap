/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:26:03 by rcorlett          #+#    #+#             */
/*   Updated: 2025/01/30 11:01:21 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_sorted_or_duplicate(t_stacks *stacks, int i)
{
	int	j;

	j = 0;
	if (i == 0)
	{
		while (i < stacks->a_size)
		{
			j = i + 1;
			while (j < stacks->a_size)
			{
				if (stacks->a[i] == stacks->a[j])
					free_and_exit(stacks, "ERROR\n");
				j++;
			}
			i++;
		}
	}
	if (is_sorted(stacks))
		free_and_exit(stacks, NULL);
}

void	parse_numbers(t_stacks *stacks)
{
	char	**temp;
	int		i;
	int		j;

	j = 0;
	temp = ft_split(stacks->join_args, ' ');
	i = 0;
	while (temp[i] != NULL && temp[i][0] != '\0')
	{
		stacks->a[j++] = ft_atoi_ps(temp[i++], stacks);
		free(temp[i - 1]);
	}
	free(temp);
}

void	initialize_stacks(int ac, char **av, t_stacks *stacks)
{
	int	i;

	i = 0;
	stacks->a_size = 0;
	stacks->b_size = 0;
	while (--ac)
	{
		if (ft_count_words(av[i + 1], ' '))
			stacks->a_size += ft_count_words(av[i + 1], ' ');
		else
			stacks->a_size++;
		i++;
	}
	stacks->a = malloc(stacks->a_size * sizeof * stacks->a);
	if (stacks->a == NULL)
		free_and_exit(stacks, "ERROR\n");
	stacks->b = malloc(stacks->a_size * sizeof * stacks->b);
	if (stacks->b == NULL)
		free_and_exit(stacks, "ERROR\n");
}

void	create_index(t_stacks *stacks)
{
	int	i;
	int	j;
	int	k;
	int	*new_a;

	new_a = malloc(stacks->a_size * sizeof * new_a);
	if (new_a == NULL)
		free_and_exit(stacks, "ERROR\n");
	i = -1;
	while (++i < stacks->a_size)
	{
		k = 0;
		j = -1;
		while (++j < stacks->a_size)
			if (stacks->a[i] > stacks->a[j])
				k++;
		new_a[i] = k;
	}
	i = stacks->a_size;
	while (i--)
		stacks->a[i] = new_a[i];
	free(new_a);
}

int	ft_atoi_ps(const char *n, t_stacks *stacks)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (n[i] == ' ' || (n[i] >= '\t' && n[i] <= '\r'))
		i++;
	if (n[i] == '-' || n[i] == '+')
	{
		if (n[i] == '-')
			sign = -1;
		i++;
	}
	while (n[i])
	{
		if (result > INT_MAX / 10
			|| (result == INT_MAX / 10 && (n[i] - '0') > INT_MAX % 10))
			free_and_exit(stacks, "Error\n");
		if (!(n[i] >= '0' && n[i] <= '9'))
			free_and_exit(stacks, "ERROR\n");
		result = result * 10 + (n[i++] - '0');
	}
	return (result * sign);
}

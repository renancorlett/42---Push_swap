/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:04:40 by rcorlett          #+#    #+#             */
/*   Updated: 2025/01/28 12:41:09 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_and_exit(t_stacks *stacks, char *error_message)
{
	if (error_message)
		write (2, error_message, ft_strlen(error_message));
	if (stacks)
	{
		free(stacks->a);
		free(stacks->b);
		free(stacks->join_args);
		free(stacks);
	}
	exit (1);
}

static void	validate_arguments(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			if (!av[i][0] || av[i][0] == ' ')
				free_and_exit(NULL, "ERROR\n");
			j = 0;
			while (av[i][j])
			{
				if ((!(ft_isdigit(av[i][j])) && av[i][j] != ' '
				&& av[i][j] != '-' && av[i][j] != '+')
				|| ((av[i][j] == '-' || av[i][j] == '+')
				&& (av[i][j + 1] == '\0' || av[i][j + 1] == ' ')))
					free_and_exit(NULL, "ERROR\n");
				j++;
			}
			i++;
		}
	}
	else
		free_and_exit(NULL, "ERROR\n");
}

static void	join_args(int ac, char **av, t_stacks *stacks)
{
	char	*current;
	char	*result;
	int		i;

	i = 0;
	result = ft_strdup("");
	while (++i < ac && av[i] != NULL)
	{
		current = ft_strjoin(result, av[i]);
		if (result)
			free(result);
		if (i != ac - 1)
		{
			result = ft_strjoin(current, " ");
			if (current)
				free(current);
			current = result;
		}
	}
	stacks->join_args = ft_strdup(current);
	if (stacks->join_args == NULL)
		free_and_exit(stacks, "ERROR\n");
	if (current)
		free(current);
}

int	main(int ac, char **av)
{
	t_stacks	*stacks;

	validade_arguments(ac, av);
	stacks = malloc(sizeof * stacks);
	if (stacks == NULL)
		exit (1);
	initialize_stacks(ac, av, stacks);
	join_arguments(ac, av, stacks);
	parse_numbers(stacks);
	check_sorted_of_duplicate(stacks, 0);
	create_index(stacks);
	if (stacks->a_size == 2 && stacks->a[0] > stacks->a[1])
		swap("sa", stacks->a, stacks->a_size);
	else if (stacks->a_size == 3)
		sort_three(stacks);
	else if (stacks->a_size >= 4 && stacks->a_size <= 5)
		sort_small(stacks);
	else
		radix_sort(stacks);
	check_sorted_or_duplicate(stacks, 1);
	free_and_exit(stacks, "ERROR\n");
	return (0);
}

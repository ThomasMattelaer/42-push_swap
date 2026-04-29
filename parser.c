/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmattela <tmattela@student.42belgium.be>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 09:51:09 by tmattela          #+#    #+#             */
/*   Updated: 2026-04-28 09:51:09 by tmattela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_th.h"

static int	parsing_data (char *argv)
{
	int	i;
	int res;

	i = 0;
	while (argv[i])
	{
		if (ft_isdigit(argv[i]) == 0)
			return (-1);
		i++;
	}
	res = ft_atoi(argv);
	return (res);
}

static int check_duplicates(t_stack *stack_a, int nb)
{
	t_stack	*current;

	current = stack_a;
	while (current != NULL)
	{
		if (nb == current->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int	valid_arguments(t_stack **stack_a, char **argv)
{
	t_stack	*new_node;
	int		i;
	int		res;

	i = 0;
	while (argv[i])
	{
		res = parsing_data(argv[i]);
		if (check_duplicates(*stack_a, res) == 0)
						// Free le node;
			return (0); 	// return error here;
		ft_lstadd_back(stack_a, ft_lstnew(res)); // add to stack;
		i++;
	}
	return (1);
}

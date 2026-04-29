/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmattela <tmattela@student.42belgium.be>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-29 10:37:05 by tmattela          #+#    #+#             */
/*   Updated: 2026-04-29 10:37:05 by tmattela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_th.h"
#include <stdio.h>

static void	print_stack(t_stack *stack, char *name)
{
	t_stack	*current;
	int		i;

	current = stack;
	i = 0;
	printf("--- Stack %s ---\n", name);
	if (!current)
		printf("(vide)\n");
	while (current != NULL)
	{
		if (i == 0)
			printf("[top] %d\n", current->value);
		else
			printf("  [%d] %d\n", i, current->value);
		current = current->next;
		i++;
	}
	printf("----------------\n");
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**tab;
	int		i;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	while (argv[i])
	{
		tab = ft_split(argv[i], ' ');
		valid_arguments(&stack_a, tab);
		free(tab);
		i++;
	}
	print_stack(stack_a, "A");
	print_stack(stack_b, "B");
}

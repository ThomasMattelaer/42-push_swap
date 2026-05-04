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

#include "push_swap.h"

static int	is_sorted(t_stack *stack_a)
{
	int		min;
	t_stack	*current;

	current = stack_a;
	min = current->value;
	while (current)
	{
		if (current->value < min)
		{
			return (0);
		}
		min = current->value;
		current = current->next;
	}
	ft_printf(1, "\n");
	return (1);
}


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
	t_global	global;
	int			i;

	ft_memset(&global, 0, sizeof(t_global));
	if (argc == 1)
		return (0);
	i = parse_flags(&global, argv);
	if (parse_arguments(i, argv, &global) == 0 || is_sorted(global.stack_a) == 1)
		return (0);
	//check si l'algo est adaptative sinon lancer le bon algo;
	//check si bench est = 1 si oui lancer la fonction de print du benchmark;
	print_stack(global.stack_a, "A");
	print_stack(global.stack_b, "B");
	printf("Disorder : %.2f\n", compute_disorder(global.stack_a));
}

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
	ft_putstr("\n", 1);
	return (1);
}
// static void	handle_flags(char **argv, t_stack **stack_a, t_stack **stack_b, int i)
// {
// 	if (argv[1][0] == '-' && argv[1][1] == '-')
// 	{
// 		if (argv[1] == "--simple")
// 			simple_sort(&stack_a, &stack_b);
// 		else if (argv[1] == "--medium")
// 			medium_sort(&stack_a, &stack_b);
// 		else if (argv[1] == "--complex")
// 			complex_sort(&stack_a, &stack_b);
// 		else if (argv[1] == "--adaptative")
// 		{
// 			compute_disorder(*stack_a);
// 		}
// 		else if (argv[1] == "--bench")
// 			bench(argv[2]);
// 	}
// }

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
	t_stack	**stack_a;
	t_stack	**stack_b;
	t_count count; 
	char	**tab;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	if (argc == 1)
		return (0);
	// LAUNCH HANDLE FLAGS
	while (argv[i])
	{
		tab = ft_split(argv[i], ' ');
		if(valid_arguments(stack_a, tab) == 0)
		{
			free(tab);
			return (0);
		}
		i++;
	}
	if (is_sorted(*stack_a) == 1)
		return (0);
	print_stack(*stack_a, "A");
	print_stack(*stack_b, "B");
	printf("Disorder : %.2f\n", compute_disorder(*stack_a));
}

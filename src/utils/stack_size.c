/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:39:50 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/29 17:40:14 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack *stack)
{
	int		length;
	t_stack	*current;

	current = stack;
	length = 0;
	if (current == NULL)
		return (0);
	while (current->next != NULL)
	{
		length++;
		current = current->next;
	}
	length++;
	return (length);
}

// t_stack *new_node(int value)
// {
//     t_stack *node = malloc(sizeof(t_stack));
//     node->value = value;
//     node->next = NULL;
//     return node;
// }

// void print_stack(t_stack *stack, char *name)
// {
//     while (stack)
//     {
//         printf("%d ", stack->value);
//         stack = stack->next;
//     }
// 	printf("%s: ", name);
//     printf("\n");
// }

// int main()
// {
//     t_stack *a = new_node(1);
//     a->next = new_node(2);
//     a->next->next = new_node(3);
//     a->next->next->next = new_node(4);
// 	t_stack *b = new_node(5);
//     b->next = new_node(6);
//     b->next->next = new_node(7);
//     b->next->next->next = new_node(8);
//     b->next->next->next->next = new_node(9);
//     b->next->next->next->next->next = new_node(10);

//     printf("a has %d node\n", stack_size(a));
//     printf("b has %d node\n", stack_size(b));
//     return 0;
// }

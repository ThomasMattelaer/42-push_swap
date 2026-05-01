/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josamba- <josamba-@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:46:50 by josamba-          #+#    #+#             */
/*   Updated: 2026/04/29 17:46:58 by josamba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack, char c)
{
	int		temp_content;
	t_stack	*current;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	current = *stack;
	temp_content = (*stack)->value;
	while (current->next != NULL)
	{
		current->value = current->next->value;
		current = current->next;
	}
	current->value = temp_content;
	if (c == 'a')
		ft_putstr("ra", 1);
	else if (c == 'b')
		ft_putstr("rb", 1);
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
//     printf("%s: ", name);
//     while (stack)
//     {
//         printf("%d ", stack->value);
//         stack = stack->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     t_stack *a = new_node(1);
//     a->next = new_node(2);
//     a->next->next = new_node(3);
//     a->next->next->next = new_node(4);

//     print_stack(a, "avant");
//     rotate(&a);
//     print_stack(a, "après");
//     return 0;
// }

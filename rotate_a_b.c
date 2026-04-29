#include <stdio.h>
#include <stdlib.h>
#include "push_swap_th.h"
void	rotate(t_stack **stack_a, t_stack **stack_b)
{
	int		temp_content_a;
	int		temp_content_b;
	t_stack	*current_a;
	t_stack	*current_b;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	current_a = *stack_a;
	temp_content_a = (*stack_a)->value;
	while(current_a->next != NULL)
	{
		current_a->value = current_a->next->value;
		current_a = current_a->next;
	}
	current_a->value = temp_content_a;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp_content_b = (*stack_b)->value;
	current_b = *stack_b;
	temp_content_b = (*stack_b)->value;
	while(current_b->next != NULL)
	{
		current_b->value = current_b->next->value;
		current_b = current_b->next;
	}
	current_b->value = temp_content_b;
}

t_stack *new_node(int value)
{
    t_stack *node = malloc(sizeof(t_stack));
    node->value = value;
    node->next = NULL;
    return node;
}

void print_stack(t_stack *stack, char *name)
{
    printf("%s: ", name);
    while (stack)
    {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

int main()
{
    t_stack *a = new_node(1);
    a->next = new_node(2);
    a->next->next = new_node(3);
    a->next->next->next = new_node(4);
	t_stack *b = new_node(5);
    b->next = new_node(6);
    b->next->next = new_node(7);
    b->next->next->next = new_node(8);

    print_stack(a, "A avant");
	print_stack(b, "B avant");
    rotate(&a,&b);
    print_stack(a, "A après");
    print_stack(b, "B après");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "push_swap_th.h"
void	rotate(t_stack **stack_a)
{
	int temp_content;
	t_stack *current;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	current = *stack_a;
	temp_content = (*stack_a)->value;
	while(current->next != NULL)
	{
		current->value = current->next->value;
		current = current->next;
	}
	current->value = temp_content;
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

    print_stack(a, "avant");
    rotate(&a);
    print_stack(a, "après");
    return 0;
}
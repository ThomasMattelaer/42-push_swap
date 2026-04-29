#include <stdio.h>
#include <stdlib.h>
#include "push_swap_th.h"
void	reverse_rotate(t_stack **stack_a)
{
	t_stack *top;
	t_stack *before_bottom;
	t_stack *bottom;
	t_stack *current;

    if (*stack_a == NULL)
        return ;
    if ((*stack_a)->next == NULL)
        return ;
    top = *stack_a;
    current = *stack_a;
    while (current->next->next != NULL)
        current = current->next;
    before_bottom = current;
    bottom = current->next;
    *stack_a = bottom;
    bottom->next = top;
    before_bottom->next = NULL;
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
    // a->next->next = new_node(3);
    // a->next->next->next = new_node(4);

    print_stack(a, "avant");
    reverse_rotate(&a);
    print_stack(a, "après");
    return 0;
}
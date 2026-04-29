#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack *top;
	t_stack *before_bottom;
	t_stack *bottom;
	t_stack *current;

    if (*stack == NULL || (*stack)->next == NULL)
        return ;
    top = *stack;
    current = *stack;
    while (current->next->next != NULL)
        current = current->next;
    before_bottom = current;
    bottom = current->next;
    *stack = bottom;
    bottom->next = top;
    before_bottom->next = NULL;
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

//     t_stack *b = new_node(5);
//     b->next = new_node(6);
//     b->next->next = new_node(7);
//     b->next->next->next = new_node(8);

//     print_stack(a, "A avant");
//     print_stack(b, "B avant");
//     reverse_rotate_a_b(&a, &b);
//     print_stack(a, "A après");
//     print_stack(b, "B après");
//     return 0;
// }
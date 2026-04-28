void push_a(t_stack  **stack_a, t_stack  **stack_b)
{
    t_stack *save_a;
    t_stack *save_b_next;

    if (*stack_b == NULL)
        return ;
    save_b_next = (*stack_b)->next;
    save_a = *stack_a;
    *stack_a = *stack_b;
    (*stack_a)->next = save_a;
    *stack_b = save_b_next;
}
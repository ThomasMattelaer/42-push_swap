void swap_a(t_stack  *stack)
{
    int temp_content;

    if (stack == NULL || stack->next == NULL)
        return ;
    temp_content = stack->value;
    stack->value = stack->next->value;
    stack->next->value = temp_content;
    return ;
}
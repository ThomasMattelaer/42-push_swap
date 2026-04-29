void swap_a_b(t_stack  *stack_a, t_stack  *stack_b)
{
    int temp_content;

    if (stack_a != NULL && stack_a->next != NULL)
    {
        temp_content = stack_a->value;
        stack_a->value = stack_a->next->value;
        stack_a->next->value = temp_content;
    }
    if (stack_b != NULL && stack_b->next != NULL)
    {
        temp_content = stack_b->value;
        stack_b->value = stack_b->next->value;
        stack_b->next->value = temp_content;
    }
    return ;
}

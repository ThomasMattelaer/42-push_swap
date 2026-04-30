void	simple_sort(t_stack *stack_a, t_stack *stack_b)
{

}

int find_min_pos(t_stack *stack_a)
{
	int 	min;
	int 	pos;
	int 	i;
	t_stack *current;

	current = stack_a;
	min = current->value;
	i = 0;
	while (current)
	{
		if(current->value < min)
		{
			min = current->value;
			pos = i;
		}
		current = current->next;
		i++;
	}
	return (pos);
}

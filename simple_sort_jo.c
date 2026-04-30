#include <limits.h>
int	min(t_stack *stack)
{
	int	temp_min;
	t_stack	*current;

	temp_min = current->value;
	current = stack;
	while (current->next)
	{
		if (temp_min > current->next->value)
		{
			temp_min = current->next->value;
			current = current->next;
		}
	}
	return (temp_min);
}

void	top(t_stack *stack, int min)
{
	t_stack	*current;
	int		index;
	int		size;

	current = stack;
	index = 0;
	size = stack_size(stack);
	while (current->value != min)
	{
		current = current->next;
		index++;
	}
	if (size / 2 > index)
		while(index + size != size)
		{
			rotate(current);
			index--;
		}
	else
		while(index != size)
		{
			reverse_rotate(current);
			index++;
		}
}

sort(t_stack *stack)
{
	while ()
}

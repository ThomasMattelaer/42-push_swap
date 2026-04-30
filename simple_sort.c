#include "push_swap.h"

void	simple_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	size;
	int pos;
	int min; 

	size = stack_size(stack_a);
	while(size > 3)
	{
		pos = find_min_pos(stack_a);
		min = ft_min(pos, (size - pos));
		size--;
	}
}

static int find_min_pos(t_stack *stack_a)
{
	int		min;
	int		pos;
	int		i;
	t_stack	*current;

	current = stack_a;
	min = current->value;
	i = 0;
	while (current)
	{
		if (current->value < min)
		{
			min = current->value;
			pos = i;
		}
		current = current->next;
		i++;
	}
	return (pos);
}
static int	ft_min(int a, int b)
{
    if (a < b)
        return (a);
    return (b);
}

#include "push_swap_th.h"

int	ft_lstsize(t_stack *stack)
{
	int		length;
	t_stack	*current;

	current = stack;
	length = 0;
	if (current == NULL)
		return (0);
	while (current->next != NULL)
	{
		length++;
		current = current->next;
	}
	length++;
	return (length);
}

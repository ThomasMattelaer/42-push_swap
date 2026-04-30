
# include "push_swap.h"

int	min(t_stack *stack)
{
	int	index_min;
	int temp_min;
	int index;
	t_stack	*current;

	current = stack;
	temp_min = current->value;
	index_min = 0;
	index = 0;
	while (current)
	{
		if (temp_min >= current->value)
		{
			temp_min = current->value;
			index_min = index;
		}
		index++;
		current = current->next;
	}
	return (index_min);
}

void	top(t_stack **stack)
{
	t_stack	*current;
	int		index_min;
	int		size;

	current = *stack;
	index_min = min(*stack);
	size = stack_size(*stack);
	if ((size / 2) >= index_min)
	{
		while(index_min != 0)
		{
			rotate(stack);
			index_min--;
		}
	}
	else
		while((size - index_min) > 0)
		{
			reverse_rotate(stack);
			index_min++;
		}
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *current;

	current = *stack_a;
	while (current->next)
		top(stack_a);
	while ((*stack_a)->next)
		push(stack_b, stack_a);
	while ((*stack_b)->next)
		push(stack_a, stack_b);
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
    t_stack *b = new_node(5);
    t_stack *a = new_node(5);
    a->next = new_node(4);
    a->next->next = new_node(3);
    a->next->next->next = new_node(2);
    a->next->next->next->next = new_node(1);
    a->next->next->next->next->next = new_node(6);

    print_stack(a, "avant");
    sort(&a,&b);
    print_stack(a, "après");
    return 0;
}

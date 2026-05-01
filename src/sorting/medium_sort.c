
# include "push_swap.h"

int *extract(t_stack **stack)
{
	int size;
	int	i;
	int	*tab;
	t_stack	*current;

	i = 0;
	size = stack_size(*stack);
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	current = *stack;
	while (current)
	{
		tab[i] = current->value;
		current = current->next;
		i++;
	}
	return (tab);
}

int *sort_tab(int *tab, int size)
{
	int	i;
	int	j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1 -i)
		{
			if (tab[j] > tab[j+1])
			{
				temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while ((i + 1) * (i + 1) <= nb)
		i++;
	return (i);
}
static int	find_max_pos_b(t_stack *stack_b)
{
	int		max;
	int		pos;
	int		i;
	t_stack	*current;

	current = stack_b;
	max = current->value;
	i = 0;
	pos = 0;
	while (current)
	{
		if (current->value > max)
		{
			max = current->value;
			pos = i;
		}
		current = current->next;
		i++;
	}
	return (pos);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmattela <tmattela@student.42belgium.be>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-29 10:36:49 by tmattela          #+#    #+#             */
/*   Updated: 2026-04-29 10:36:49 by tmattela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_th.h"

int	*stack_to_array(t_stack *stack_a, int size)
{
	int 	*arr;
	int 	i;
	t_stack	*current;


	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while(current != NULL)
	{
		arr[i] = current->value;
		current = current->next;
		i++;
	}
	return (arr);
}

int	compute_disorder(t_stack *stack_a)
{
    int mistakes;
    int total_pairs;
    int i;
	int j;
	int	*arr;

    mistakes = 0;
	total_pairs = 0;
	i = 0;
	arr = stack_to_array(stack_a, ft_lst_size(stack_a));
    while (i < ft_lst_size(stack_a))
    {
        j = i+1;
        while (j < ft_lst_size(stack_a))
        {
            total_pairs += 1;
            if (arr[i] > arr[j])
                mistakes += 1;
            j++;
        }
        i++;
    }
    return (mistakes / total_pairs);
}

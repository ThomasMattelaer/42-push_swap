#include "push_swap_th.h"

compute_disorder(t_stack *stack_a)
{
    int mistakes;
    int total_pairs;
    int i;
	int j; 

    i = 0;
    while (i < (ft_lst_size(stack_a)-1))
    {
        j = i+1;
        while (j < (ft_lst_size(stack_a)-1))
        {
            total_pairs += 1;
            if (stack_a[i] > stack_a[j])
                mistakes += 1;
            j++;
        }
        i++;
    }
    return (mistakes / total_pairs);
}

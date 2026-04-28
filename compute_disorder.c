#include "push_swap.h"

compute_disorder(stack a)
{
    int mistakes;
    int total_pairs;
    int i;

    i = 0;
    while (i < (ft_lst_size(a)-1))
    {
        j = i+1;
        while (j < (ft_lst_size(a)-1))
        {
            total_pairs += 1;
            if a[i] > a[j]:
                mistakes += 1;
            j++;
        }
        i++;
    }
    return (mistakes / total_pairs);
}
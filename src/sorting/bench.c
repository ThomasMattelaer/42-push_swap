/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmattela <tmattela@student.42belgium.be>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-04 09:11:06 by tmattela          #+#    #+#             */
/*   Updated: 2026-05-04 09:11:06 by tmattela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_bench(t_count *count, float disorder, char *s)
{
	ft_printf(2, "Disorder     : %.2f\n", disorder);
	ft_printf(2, "Strategy     : %s\n", s);
	ft_printf(2, "Total ops    : %d\n", count->total);
	ft_printf(2, "  ra: %d  rb: %d  rr: %d\n", count->ra, count->rb, count->rr);
	ft_printf(2, "  pa: %d  pb: %d\n", count->pa, count->pb);
	ft_printf(2, "  sa: %d  sb: %d  ss: %d\n", count->sa, count->sb, count->ss);
	ft_printf(2, "  rra: %d  rrb: %d  rrr: %d\n", count->rra, count->rrb, count->rrr);
}

void	bench(char *s, t_stack **stack_a, t_stack **stack_b, t_count *count)
{
		if (s == "--simple")
			simple_sort(&stack_a, &stack_b, count);
		else if (s == "--medium")
			medium_sort(&stack_a, &stack_b, count);
		else if (s == "--complex")
			complex_sort(&stack_a, &stack_b, count);
		else if (s == "--adaptative" || s)
		{
			compute_disorder(*stack_a);
		}
}

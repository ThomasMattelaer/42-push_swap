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

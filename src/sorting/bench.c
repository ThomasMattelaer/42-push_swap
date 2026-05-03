#include "push_swap.h"

void	print_bench(t_count *count, float disorder, char *s)
{
	ft_printf("Disorder     : %.2f\n", disorder);
	ft_printf("Strategy     : %s\n", s);
	ft_printf("Total ops    : %d\n", count->total);
	ft_printf("  ra: %d  rb: %d  rr: %d\n", count->ra, count->rb, count->rr);
	ft_printf("  pa: %d  pb: %d\n", count->pa, count->pb);
	ft_printf("  sa: %d  sb: %d  ss: %d\n", count->sa, count->sb, count->ss);
	ft_printf("  rra: %d  rrb: %d  rrr: %d\n", count->rra, count->rrb, count->rrr);
}

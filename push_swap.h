/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmattela <tmattela@student.42belgium.be>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 09:42:44 by tmattela          #+#    #+#             */
/*   Updated: 2026-04-28 09:42:44 by tmattela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

int		ft_isdigit(int c);
int		valid_arguments(t_stack **stack_a, char **argv);
int		ft_atoi(const char *nptr);
int		stack_size(t_stack *stack);
char	**ft_split(char const *s, char c);
t_stack	*ft_lstnew(int value);
t_stack	*ft_lstlast(t_stack *lst);
float	compute_disorder(t_stack *stack_a);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	reverse_rotate(t_stack **stack, char c);
void	reverse_rotate_a_b(t_stack **stack_a, t_stack **stack_b);
void	rotate(t_stack **stack, char c);
void	rotate_a_b(t_stack **stack_a, t_stack **stack_b);
void	push(t_stack **stack_a, t_stack **stack_b, char c);
void	swap(t_stack *stack, char c);
void	swap_a_b(t_stack *stack_a, t_stack *stack_b);
void	ft_putstr(char *s, int fd);


#endif

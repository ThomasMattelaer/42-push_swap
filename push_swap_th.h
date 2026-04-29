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

#ifndef PUSH_SWAP_TH_H
# define PUSH_SWAP_TH_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
} t_stack;

int		ft_isdigit(int c);
int		valid_arguments(t_stack **stack_a, char **argv);
int		ft_atoi(const char *nptr);
char	**ft_split(char const *s, char c);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstnew(int value);
t_stack	*ft_lstlast(t_stack *lst);

#endif

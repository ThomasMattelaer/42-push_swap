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

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
} t_stack;

int	ft_isascii(int c);

#endif

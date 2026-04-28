/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmattela <tmattela@student.42belgium.be>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-04-28 09:51:09 by tmattela          #+#    #+#             */
/*   Updated: 2026-04-28 09:51:09 by tmattela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_th.h"


int	valid_arguments(t_stack a, int *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_isascii(argv[i]) == 0 || argv[i] >= -2147483648 && argv[i] <= 2147483647)
			return ; // return error here;
		// add to stack;
		i++;
	}
}

int check_duplicates(t_stack *a, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (a != NULL)
	{
		if ()
	}

}

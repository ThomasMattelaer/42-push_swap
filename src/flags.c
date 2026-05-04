/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmattela <tmattela@student.42belgium.be>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-04 09:58:42 by tmattela          #+#    #+#             */
/*   Updated: 2026-05-04 09:58:42 by tmattela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	handle_flags(char *s, t_global *global)
{
	if (ft_strncmp(s, "--simple", 8) == 0)
		global->algo = 1;
	else if (ft_strncmp(s, "--medium", 8) == 0)
		global->algo = 2;
	else if (ft_strncmp(s, "--complex", 9) == 0)
		global->algo = 3;
	else if (ft_strncmp(s, "--adaptative", 10) == 0)
		global->algo = 4;
}
int	parse_flags(t_global *global, char **argv)
{
	int i;

	i = 1;
	if (ft_strncmp(argv[i], "--bench", 7) == 0)
	{
		global->bench++;
		i++;
	}
	if (ft_strncmp(argv[i], "--", 2) == 0)
	{
		handle_flags(argv[i], global);
		i++;
	}
	return (i);
}


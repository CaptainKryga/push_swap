/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbashiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:03:32 by jbashiri          #+#    #+#             */
/*   Updated: 2019/03/28 18:03:34 by jbashiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rrb(t_union *var)
{
	int x;
	int i;

	change_name_functions(var, "rrb\n");
	i = var->size_b - 1;
	if (var->size_b <= 1)
		return ;
	x = var->b[i];
	while (i - 1 >= 0)
	{
		var->b[i] = var->b[i - 1];
		i--;
	}
	var->b[0] = x;
	if (var->flag_v)
		out_two_mass(var);
}

void		rrr(t_union *var)
{
	change_name_functions(var, "rrr\n");
	var->flag_functions = 1;
	rra(var);
	rrb(var);
	var->flag_functions = 0;
}

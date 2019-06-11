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

void		pb(t_union *var)
{
	int x;
	int i;

	change_name_functions(var, "pb\n");
	i = 0;
	if (var->size_a == 0)
		return ;
	x = var->a[i];
	while (i + 1 < var->size_a)
	{
		var->a[i] = var->a[i + 1];
		i++;
	}
	var->size_a -= 1;
	i = var->size_b;
	while (i - 1 >= 0)
	{
		var->b[i] = var->b[i - 1];
		i--;
	}
	var->b[0] = x;
	var->size_b += 1;
	if (var->flag_v)
		out_two_mass(var);
}

void		ra(t_union *var)
{
	int x;
	int i;

	change_name_functions(var, "ra\n");
	i = 0;
	if (var->size_a <= 1)
		return ;
	x = var->a[0];
	while (i + 1 < var->size_a)
	{
		var->a[i] = var->a[i + 1];
		i++;
	}
	var->a[var->size_a - 1] = x;
	if (var->flag_v)
		out_two_mass(var);
}

void		rb(t_union *var)
{
	int x;
	int i;

	change_name_functions(var, "rb\n");
	i = 0;
	if (var->size_b <= 1)
		return ;
	x = var->b[0];
	while (i < var->size_b)
	{
		var->b[i] = var->b[i + 1];
		i++;
	}
	var->b[var->size_b - 1] = x;
	if (var->flag_v)
		out_two_mass(var);
}

void		rr(t_union *var)
{
	change_name_functions(var, "rr\n");
	var->flag_functions = 1;
	ra(var);
	rb(var);
	var->flag_functions = 0;
}

void		rra(t_union *var)
{
	int x;
	int i;

	change_name_functions(var, "rra\n");
	i = var->size_a - 1;
	if (var->size_a <= 1)
		return ;
	x = var->a[i];
	while (i - 1 >= 0)
	{
		var->a[i] = var->a[i - 1];
		i--;
	}
	var->a[0] = x;
	if (var->flag_v)
		out_two_mass(var);
}

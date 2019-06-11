/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbashiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 11:12:26 by jbashiri          #+#    #+#             */
/*   Updated: 2019/04/01 11:12:27 by jbashiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			create_result_res(t_union *var)
{
	int x;
	int size;

	size = var->size;
	x = 0;
	while (x < size)
	{
		var->res[x] = var->numbers[x];
		x++;
	}
	x = 0;
	while (x < size)
	{
		if (x + 1 < size && ft_swap(&x, var->res))
			continue;
		x++;
	}
}

void			create_result_a(t_union *var)
{
	int x;
	int size;

	size = var->size_a;
	x = 0;
	while (x < size)
	{
		var->res_a[x] = var->a[x];
		x++;
	}
	x = 0;
	while (x < size)
	{
		if (x + 1 < size && ft_swap(&x, var->res_a))
			continue;
		x++;
	}
}

void			create_result_b(t_union *var, int size)
{
	int x;

	x = 0;
	while (x < size)
	{
		var->res_b[x] = var->b[x];
		x++;
	}
	x = 0;
	while (x < size)
	{
		if (x + 1 < size && ft_swap_b(&x, var->res_b))
			continue;
		x++;
	}
}

void			create_stack_res_a(t_union *var)
{
	int x;
	int size;
	int y;

	x = 0;
	size = last_med(var, 0) + var->size_a;
	y = var->size - 1;
	while (x < size)
		var->res_a[x++] = var->res[y--];
	x = 0;
	while (x < size)
	{
		if (x + 1 < size && ft_swap(&x, var->res_a))
			continue;
		x++;
	}
}

void			create_res_a_of_b(t_union *var, int size)
{
	int x;
	int y;

	y = 0;
	x = var->size_a;
	while (x < size)
		var->res_a[x++] = var->a[y++];
	x = 0;
	while (x < size)
	{
		if (x + 1 < size && ft_swap(&x, var->res_a))
			continue;
		x++;
	}
}

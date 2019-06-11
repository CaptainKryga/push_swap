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

static void		ft_full_zero(int *mas, int size)
{
	int x;

	x = 0;
	while (x < size)
		mas[x++] = 0;
}

static void		create_union_two(t_union *new, int size)
{
	new->size = size;
	new->size_a = size;
	new->size_b = 0;
	new->max_func = 0;
	new->flag_functions = 0;
	new->flag_v = 0;
	new->flag_s = 0;
	new->flag_i = 0;
	new->flag_h = 0;
	new->flag_colour = 0;
	new->flag_size = 0;
}

t_union			*create_union(int size)
{
	t_union *new;

	new = (t_union*)malloc(sizeof(t_union));
	new->res = (int*)malloc(sizeof(int) * size);
	new->numbers = (int*)malloc(sizeof(int) * size);
	new->a = (int*)malloc(sizeof(int) * size);
	new->res_a = (int*)malloc(sizeof(int) * size);
	new->b = (int*)malloc(sizeof(int) * size);
	new->res_b = (int*)malloc(sizeof(int) * size);
	new->log = (int*)malloc(sizeof(int) * size);
	ft_full_zero(new->res, size);
	ft_full_zero(new->numbers, size);
	ft_full_zero(new->a, size);
	ft_full_zero(new->res_a, size);
	ft_full_zero(new->b, size);
	ft_full_zero(new->res_b, size);
	ft_full_zero(new->log, size);
	new->functions = ft_strnew(1);
	create_union_two(new, size);
	return (new);
}

int				last_med(t_union *var, int flag)
{
	int x;
	int med;

	x = 0;
	med = 0;
	while (1)
	{
		if (x > 0 && var->log[x] == 0)
		{
			if (flag == 1)
				var->log[x - 1] = 0;
			break ;
		}
		else
			med = var->log[x];
		x++;
	}
	return (med);
}

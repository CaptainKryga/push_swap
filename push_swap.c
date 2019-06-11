/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbashiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 17:56:37 by jbashiri          #+#    #+#             */
/*   Updated: 2019/03/28 17:56:41 by jbashiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		pre_algoritm_stack_a(t_union *var)
{
	int			size;
	int			max;

	max = 6;
	size = var->size_a;
	while (size > max)
	{
		create_median(var);
		size = var->size_a;
	}
}

static int		algoritm(t_union *var)
{
	pre_algoritm_stack_a(var);
	create_sort(var);
	while (check_result_stack_complite(var) != 1)
		create_go_to_stack_a(var);
	return (0);
}

static int		flags_print(t_union *var)
{
	if (!var->flag_s)
		ft_printf(var->functions);
	if (var->flag_size)
		ft_printf("size stack = %d\n", var->size);
	if (var->flag_i)
		ft_printf("functions = %d\n", var->max_func);
	if (var->flag_h)
		ft_printf("usage: ./push_swap -vsix \"numbers\"\n");
	free_struct(var);
	return (0);
}

void			flags_off(t_union *var)
{
	var->flag_functions = 0;
	var->flag_v = 0;
	var->flag_s = 0;
	var->flag_i = 0;
	var->flag_h = 0;
	var->flag_size = 0;
}

int				main(int argc, char **argv)
{
	t_union		*var;
	int			size;

	if (argc < 2)
		return (0);
	if ((size = parser(argv, argc, 0)) == -777)
		return (error());
	var = create_union(size);
	if (parser_two(argv, argc, var) || check_duplicate(var))
	{
		free_struct(var);
		return (error());
	}
	flags_off(var);
	create_result_res(var);
	create_stack_index(var);
	sort_res_number(var);
	if (check_result_stack_complite(var))
		return (flags_print(var));
	algoritm(var);
	return (flags_print(var));
}

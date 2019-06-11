/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbashiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:07:08 by jbashiri          #+#    #+#             */
/*   Updated: 2019/03/28 18:07:15 by jbashiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			error(void)
{
	ft_printf("Error\n");
	return (1);
}

int			check_char_stack(char ch)
{
	if (ch == '\f' || ch == '\n' || ch == '\r' || ch == '\t' || ch == '\v'
		|| ch == ' ' || ch == '+')
		return (0);
	return (1);
}

int			parser_check_flags(const char *str, int flag)
{
	int x;

	x = 0;
	if (str[0] == '-' && flag == 1)
	{
		while (str[x])
		{
			if (str[x] >= '0' && str[x] <= '9')
				return (1);
			x++;
		}
		return (2);
	}
	return (1);
}

int			check_duplicate(t_union *var)
{
	int		x;
	int		y;
	int		num;

	x = 0;
	y = 0;
	num = 0;
	while (y < var->size)
	{
		if (var->numbers[y] == var->numbers[x])
		{
			num++;
			if (num == 2)
				return (1);
		}
		x++;
		if (x == var->size)
		{
			num = 0;
			y++;
			x = 0;
		}
	}
	return (0);
}

int			while_space(const char *str)
{
	int		x;

	x = 0;
	while (str[x])
	{
		if (str[x] == '\f' || str[x] == '\n' || str[x] == '\r' ||
				str[x] == '\t' || str[x] == '\v' || str[x] == ' ' || str[x]
				== '+')
			x++;
		else
			break ;
	}
	return (x);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbashiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 15:43:17 by jbashiri          #+#    #+#             */
/*   Updated: 2019/04/18 15:43:21 by jbashiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				ft_swap(int *x, int *mas)
{
	int swap;

	if (mas[*x] > mas[*x + 1])
	{
		swap = mas[*x];
		mas[*x] = mas[*x + 1];
		mas[*x + 1] = swap;
		*x = 0;
		return (1);
	}
	return (0);
}

int				ft_swap_b(int *x, int *mas)
{
	int swap;

	if (mas[*x] < mas[*x + 1])
	{
		swap = mas[*x];
		mas[*x] = mas[*x + 1];
		mas[*x + 1] = swap;
		*x = 0;
		return (1);
	}
	return (0);
}

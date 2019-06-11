/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbashiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:47:07 by jbashiri          #+#    #+#             */
/*   Updated: 2019/04/18 14:47:09 by jbashiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_power2(long long int nb, int notation)
{
	long long int	res;

	res = 0;
	if (nb < 0)
		res++;
	if (!nb)
		return (1);
	while (nb)
	{
		nb = nb / notation;
		res++;
	}
	return (res);
}

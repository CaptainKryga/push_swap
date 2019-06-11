/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbashiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 10:12:20 by jbashiri          #+#    #+#             */
/*   Updated: 2019/04/08 10:12:25 by jbashiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		free_struct(t_union *var)
{
	free(var->functions);
	free(var->a);
	free(var->b);
	free(var->res);
	free(var->numbers);
	free(var->res_a);
	free(var->res_b);
	free(var->log);
	free(var);
}

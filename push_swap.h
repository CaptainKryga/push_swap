/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbashiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 17:56:30 by jbashiri          #+#    #+#             */
/*   Updated: 2019/03/28 17:56:33 by jbashiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_PUSH_SWAP_H
# define PUSH_SWAP_PUSH_SWAP_H

# include "ft_printf.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define ERROR {ft_printf("usage: ./checker -vcix \"numbers\"\n"); return (0);}

typedef struct	s_union
{
	int			*res;
	int			*numbers;
	int			*a;
	int			*res_a;
	int			*b;
	int			*res_b;
	int			*log;
	int			size;
	int			size_a;
	int			size_b;
	int			max_func;
	char		*functions;
	int			flag_functions;
	int			flag_v;
	int			flag_s;
	int			flag_i;
	int			flag_h;
	int			flag_colour;
	int			flag_size;
}				t_union;

void			change_name_functions(t_union *var, char *str);
void			sa(t_union *var);
void			sb(t_union *var);
void			ss(t_union *var);
void			pa(t_union *var);
void			pb(t_union *var);
void			ra(t_union *var);
void			rb(t_union *var);
void			rr(t_union *var);
void			rra(t_union *var);
void			rrb(t_union *var);
void			rrr(t_union *var);
int				parser_check_flags(const char *str, int flag);
int				check_result_stack_complite(t_union *var);
int				check_result_stack_a(t_union *var);
int				while_search(int *massive, int size, int num);
int				while_search_num_pos(int *massive, int size, int num);
int				check_result_stack(const int *a, int size, const int *res_a);
void			create_result_b(t_union *var, int size);
void			free_struct(t_union *var);
void			create_median(t_union *var);
void			create_sort(t_union *var);
int				record_push_aplus(t_union *var, int y, int *pos, int *flag);
void			create_go_to_stack_a(t_union *var);
int				ft_swap(int *x, int *mas);
t_union			*create_union(int size);
void			create_result_res(t_union *var);
void			create_result_a(t_union *var);
int				last_med(t_union *var, int flag);
void			create_res_a_of_b(t_union *var, int len);
void			create_stack_res_a(t_union *var);
void			out_two_mass(t_union *var);
int				error(void);
int				check_char_stack(char ch);
int				check_duplicate(t_union *var);
void			sort_res_number(t_union *var);
void			create_stack_index(t_union *var);
int				parser_two(char **argv, int argc, t_union *var);
int				parser(char **argv, int argc, int flag);
int				ft_swap_b(int *x, int *mas);
int				while_space(const char *str);

#endif

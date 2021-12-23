/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiopax <sergiopax@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 08:40:04 by bkeskint          #+#    #+#             */
/*   Updated: 2021/12/23 13:20:02 by sergiopax        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_b;
	int	size_a;
	int	size;
	int	count;
	int	temp;
	int	index;
	int moves;
}	t_stack;

void	create_stacks(int argc, char *argv[], t_stack *stack);
int		is_a_sorted(t_stack *stack);
void	sort_three(t_stack *stack);
void	sort_four_five(t_stack *stack);
void	decider(t_stack *stack);
void	sa(t_stack *stack);
void	pa(t_stack *stack);
void	ra(t_stack *stack);
void	rra(t_stack *stack);
void	pb(t_stack *stack);
void	ft_putstr(char *str);
void 	ft_exit(char *error_msg);

#endif
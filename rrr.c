/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiopax <sergiopax@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:38:48 by spax              #+#    #+#             */
/*   Updated: 2021/12/23 12:46:39 by sergiopax        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack *stack)
{
	int	tempa;
	int	tempb;
	int	i;
	int j;

	i = stack->size_a - 1;
	tempa = stack->stack_a[stack->size_a - 1];
	while (i > 0)
	{
		stack->stack_a[i] = stack->stack_a[i - 1];
		i--;
	}
	stack->stack_a[0] = tempa;
	j = stack->size_b - 1;
	tempb = stack->stack_b[stack->size_b - 1];
	while (j > 0)
	{
		stack->stack_b[j] = stack->stack_b[j - 1];
		j--;
	}
	stack->stack_b[0] = tempb;
	write(1, "rrr\n", 4);
	stack->moves++;
}

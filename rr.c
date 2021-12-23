/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiopax <sergiopax@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:31:13 by bkeskint          #+#    #+#             */
/*   Updated: 2021/12/23 12:46:25 by sergiopax        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack *stack)
{
	int	tempa;
	int	i;
	int tempb;
	int j;

	i = 0;
	tempa = stack->stack_a[0];
	while (i < stack->size_a - 1)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i] = tempa;
	j = 0;
	tempb = stack->stack_b[0];
	while (j < stack->size_b - 1)
	{
		stack->stack_b[j] = stack->stack_b[j + 1];
		j++;
	}
	stack->stack_b[i] = tempb;
	write(1, "rr\n", 3);
	stack->moves++;
}

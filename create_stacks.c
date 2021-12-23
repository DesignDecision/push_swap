/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiopax <sergiopax@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:30:26 by spax              #+#    #+#             */
/*   Updated: 2021/12/23 13:50:18 by sergiopax        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_a_sorted(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->stack_a[i] < stack->stack_a[j])
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

void	create_stacks(int argc, char *argv[], t_stack *stack)
{
	int	i;

	i = 0;
	stack->size = argc - 1;
	stack->size_a = argc - 1;
	stack->size_b = 0;
	stack->stack_a = malloc(sizeof(int) * (argc - 1));
	stack->stack_b = malloc(sizeof(int) * (argc - 1));
	while (i < argc - 1)
	{
		stack->stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	if (is_a_sorted(stack))
		return ;
	else if (stack->size == 3)
		sort_three(stack);
	else if (stack->size == 4 || stack->size == 5)
		sort_four_five(stack);
	//else if (stack->size > 5)
	
	i = 0;
	while (i < argc - 1)
	{
		printf("%d\n", stack->stack_a[i]);
		i++;
	}
	printf("size: %d\n", stack->size);
	printf("test3");
}

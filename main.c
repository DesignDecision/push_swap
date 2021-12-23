/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiopax <sergiopax@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:45:48 by spax              #+#    #+#             */
/*   Updated: 2021/12/23 13:46:52 by sergiopax        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_handler(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		if ((ft_atoi(argv[i + 1]) > 2147483647))
			ft_exit("Error \n");
		while (argv[i + 1][j])
		{
			if (argv[i + 1][j] < '0' || argv[i + 1][j] > '9')
				ft_exit("Error \n");
			j++;
		}
		j = i + 1;
		while (j < argc - 1)
		{
			if (ft_atoi (argv[i + 1]) == ft_atoi (argv[j + 1]))
				ft_exit("Error \n");
			j++;
		}
		i++;
	}
}

void ft_exit(char *error_msg)
{
	ft_putstr(error_msg);
	exit(0);
}

int	main(int argc, char *argv[])
{
	t_stack	stack;
	
	stack.moves = 0;
	if (argc < 3)
		ft_exit("too few arguments");
	error_handler (argc, argv);
	create_stacks (argc, argv, &stack);
	printf("test1");
	ft_putstr("Moves needed: ");
	ft_putnbr_fd(stack.moves, 1);
	printf("test2");
	return (0);
}

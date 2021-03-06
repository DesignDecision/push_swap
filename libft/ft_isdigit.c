/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spax <spax@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 12:18:05 by spax              #+#    #+#             */
/*   Updated: 2021/05/17 12:18:05 by spax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	int	a;

	a = 1;
	if (c < '0' || c > '9')
		a = 0;
	return (a);
}

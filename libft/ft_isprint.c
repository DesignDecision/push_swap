/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spax <spax@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 17:13:29 by spax              #+#    #+#             */
/*   Updated: 2021/05/17 17:13:29 by spax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	int	a;

	a = 1;
	if (c < ' ' || c > '~')
		a = 0;
	return (a);
}

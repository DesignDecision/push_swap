/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spax <spax@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 18:15:33 by spax              #+#    #+#             */
/*   Updated: 2021/02/17 11:17:32 by spax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c + 32);
	return (c);
}
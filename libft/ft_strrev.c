/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spax <spax@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:02:16 by spax              #+#    #+#             */
/*   Updated: 2021/10/08 15:02:16 by spax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_strrev(char *str)
{
	size_t	i;
	size_t	len;
	int *buf;
	
	
	i = 0;
	len = ft_strlen(str);
	while (len > 0)
	{
		buf[i] = str[len - 1];
		i++;
		len--;
	}
	buf[i] = '\0';
}


int main()
{
	char str[11];
	char c = '0';
	int i = 0;
	int j = 0;
	
	while(i < 10)
	{
		str[i] = i;
		i++;
	}
	printf("before:");
	while(j < 10)
	{
		printf("%d", str[j]);
		j++;
	}
	j = 0;
	ft_strrev(str);
	printf("after:");
	while(j < 10)
	{
		printf("%d", str[j]);
		j++;
		return(0);
	}
}

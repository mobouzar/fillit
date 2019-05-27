/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myd <myd@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 06:31:31 by mobouzar          #+#    #+#             */
/*   Updated: 2019/05/03 05:46:51 by myd              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int multiplier;
	int total;

	multiplier = 1;
	total = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' ||
			*str == '\r' || *str == '\v')
		str++;
	if (str[0] == '-')
	{
		multiplier = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		total = (total * 10) + *str - '0';
		str++;
	}
	return (total * multiplier);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 16:04:53 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/20 16:05:20 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tempchar;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(str);
	len -= 1;
	j = len % 2;
	j = len - j;
	j = j / 2;
	i = 0;
	while (i <= j)
	{
		tempchar = str[i];
		str[i] = str[len - i];
		str[len - i] = tempchar;
		i++;
	}
	return (str);
}

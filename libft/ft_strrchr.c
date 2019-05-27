/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 04:08:05 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/12 05:46:48 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	if ((char)c == '\0')
		return (ft_strchr(s, c));
	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
			str = (char*)s;
		s++;
	}
	return (str);
}

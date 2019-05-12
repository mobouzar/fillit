/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 05:47:36 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/12 06:01:34 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	ne_len;
	size_t	hay_len;
	char	*str;

	i = 0;
	ne_len = ft_strlen(needle);
	hay_len = ft_strlen(haystack);
	str = (char *)haystack;
	if (ne_len == 0)
		return (str);
	while (i <= hay_len)
	{
		if (ft_strncmp(haystack + i, needle, ne_len) == 0)
			return (str + i);
		i++;
	}
	return (NULL);
}

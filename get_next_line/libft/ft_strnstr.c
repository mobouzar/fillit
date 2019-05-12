/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 06:03:00 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/12 06:07:44 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
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
	while (i <= hay_len && len-- >= ne_len)
	{
		if (ft_strncmp(haystack + i, needle, ne_len) == 0)
			return (str + i);
		i++;
	}
	return (NULL);
}

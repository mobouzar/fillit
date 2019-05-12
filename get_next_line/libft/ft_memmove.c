/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 22:40:07 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/11 23:21:08 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*memsrc;
	char		*memdst;

	memsrc = (const char *)src;
	memdst = (char *)dst;
	if (memsrc > memdst)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			*(memdst + len) = *(memsrc + len);
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 20:49:12 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/11 22:39:12 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*sdst;
	unsigned char	*ssrc;

	sdst = (char *)dst;
	ssrc = (unsigned char *)src;
	while (n > 0)
	{
		if (*ssrc == (unsigned char)c)
		{
			*(sdst++) = *(ssrc++);
			return (sdst);
		}
		else
			*(sdst++) = *(ssrc++);
		n--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 04:16:24 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/16 21:51:58 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			number[13];
	int				i;
	unsigned int	nbr;

	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	nbr = (unsigned int)n;
	i = 0;
	while (nbr >= 10)
	{
		number[i++] = '0' + (nbr % 10);
		nbr /= 10;
	}
	number[i] = '0' + nbr;
	while (i >= 0)
		ft_putchar_fd(number[i--], fd);
}

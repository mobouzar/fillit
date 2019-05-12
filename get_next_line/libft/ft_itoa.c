/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 21:45:38 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/16 21:42:02 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_count_digits(int nb)
{
	int				total;
	unsigned int	nbr;

	total = 0;
	if (nb < 0)
		nb *= -1;
	nbr = (unsigned int)nb;
	while (nbr >= 10)
	{
		nbr /= 10;
		total++;
	}
	total++;
	return (total);
}

char				*ft_itoa(int n)
{
	char			*number;
	int				i;
	unsigned int	nbr;
	int				digitscount;

	digitscount = ft_count_digits(n);
	if (n < 0)
		digitscount++;
	n = ft_abs(n);
	number = (char *)malloc(sizeof(char) * (digitscount + 1));
	if (number == NULL)
		return (NULL);
	number[0] = '-';
	nbr = (unsigned int)n;
	i = digitscount;
	number[i--] = '\0';
	while (nbr >= 10)
	{
		number[i--] = '0' + (nbr % 10);
		nbr /= 10;
	}
	number[i] = '0' + nbr;
	return (number);
}

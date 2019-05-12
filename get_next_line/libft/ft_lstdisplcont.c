/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisplcont.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 21:42:42 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/20 21:42:45 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdisplcont(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	else
	{
		tmp = lst;
		while (tmp != NULL)
		{
			if (!tmp->content)
				return ;
			ft_putstr(tmp->content);
			ft_putchar('\n');
			tmp = tmp->next;
		}
	}
}

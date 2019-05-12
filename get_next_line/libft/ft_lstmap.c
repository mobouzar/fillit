/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 11:54:00 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/17 11:54:08 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*newlst;
	t_list		*list;
	t_list		*temp;

	if (!lst || !f)
		return (NULL);
	list = f(lst);
	newlst = ft_lstnew(lst->content, lst->content_size);
	newlst = list;
	while (lst->next)
	{
		lst = lst->next;
		temp = f(lst);
		if (!(list->next = ft_lstnew(temp->content, temp->content_size)))
			return (NULL);
		list = list->next;
	}
	return (newlst);
}

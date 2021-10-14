/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:00:55 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/14 08:11:54 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*elem;

	start = NULL;
	elem = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (elem)
		{
			elem->next = ft_lstnew(f(lst->content));
			elem = elem->next;
		}
		else
			elem = ft_lstnew(f(lst->content));
		if (!start)
			start = elem;
		if (!elem)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (start);
}

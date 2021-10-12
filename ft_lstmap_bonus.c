/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:00:55 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/10 20:20:19 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*elem;

	if (!lst)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	if (!start)
		return (NULL);
	elem = start;
	while (lst->next)
	{
		elem->next = ft_lstnew(f(lst->next->content));
		if (!(elem->next))
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		elem = elem->next;
		lst = lst->next;
	}
	elem = ft_lstnew(f(lst->content));
	elem->next = NULL;
	return (start);
}

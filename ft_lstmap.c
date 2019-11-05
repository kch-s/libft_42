/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 12:33:07 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/11 12:33:55 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list_h;
	t_list *list_it;

	if (lst == NULL)
		return (NULL);
	list_it = f(lst);
	list_h = list_it;
	while (lst->next)
	{
		lst = lst->next;
		list_it->next = f(lst);
		list_it = list_it->next;
	}
	return (list_h);
}

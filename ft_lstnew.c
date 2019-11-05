/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:36:50 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/10 19:11:04 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*list;
	void			*tmp;

	list = (t_list*)malloc(sizeof(t_list));
	if (list != NULL)
	{
		if (content == NULL)
		{
			list->content = NULL;
			list->content_size = 0;
		}
		else
		{
			tmp = ft_memalloc(content_size);
			ft_memcpy(tmp, content, content_size);
			list->content = tmp;
			list->content_size = content_size;
		}
		list->next = NULL;
	}
	else
		return (NULL);
	return (list);
}

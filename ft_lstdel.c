/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:32:58 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/08 15:33:04 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (*alst)
	{
		while (*alst != NULL)
		{
			tmp = *alst;
			(*del)(tmp->content, tmp->content_size);
			free(tmp);
			*alst = (*alst)->next;
		}
		*alst = NULL;
	}
}

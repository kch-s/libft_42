/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 22:04:36 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/07 21:27:00 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest;
	char	*str;

	dest = (char *)dst;
	str = (char *)src;
	i = 0;
	if (dest > str)
		while (len >= ++i)
			dest[len - i] = str[len - i];
	else
		while (len > i)
		{
			dest[i] = str[i];
			i++;
		}
	return (dst);
}

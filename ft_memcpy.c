/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 22:04:19 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/08 18:08:06 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*str;
	size_t	i;

	dest = (char *)dst;
	str = (char *)src;
	i = -1;
	while (++i < n)
		dest[i] = str[i];
	return (dst);
}

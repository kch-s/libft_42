/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 22:21:07 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/14 23:51:26 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	size_t			tmp;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			tmp = i;
			while (haystack[i] == needle[j] && i < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[tmp]);
				i++;
				j++;
			}
			i = tmp;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 22:21:40 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/08 13:16:45 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	j;
	int				tmp;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			tmp = i;
			while (haystack[i] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[tmp]);
				j++;
				i++;
			}
			i = tmp;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 12:19:48 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/15 16:45:00 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char				**str;
	unsigned int		len;
	char				*tmp;

	if (!s)
		return (NULL);
	len = ft_find_len((char *)s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	tmp = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (tmp != s)
				*(str++) = ft_strsub(tmp, 0, s - tmp);
			tmp = (char *)s + 1;
		}
		s++;
	}
	if (tmp != s)
		*(str++) = ft_strsub(tmp, 0, s - tmp);
	*str = NULL;
	return (str - len);
}

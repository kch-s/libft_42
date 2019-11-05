/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 12:19:56 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/11 12:28:13 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;
	int				j;
	int				k;

	j = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	k = ft_strlen(s) - 1;
	if (!(str = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (ft_issplit(s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strnew(1));
	while (s[j])
	{
		if (ft_issplit(s[k]) == 1)
			k--;
		j++;
	}
	k = k - i + 1;
	str = ft_strsub(s, i, k);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 22:14:16 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/07 22:00:00 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *str;

	str = NULL;
	str = (char *)malloc(sizeof(*str) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (0);
	else if (str != NULL)
		ft_strcpy(str, s1);
	return (str);
}

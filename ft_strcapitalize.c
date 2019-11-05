/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 01:24:02 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/16 01:28:24 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] != '\0' && str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z' && str[i - 1] < '0') &&
					(str[i - 1] < 58 && str[i - 1] > 47)) ||
				(str[i - 1] < 48 && str[i - 1] >= 0) ||
				(str[i - 1] < 65 && str[i - 1] > 57) ||
				(str[i - 1] < 97 && str[i - 1] > 90) ||
				(str[i - 1] < 127 && str[i - 1] > 122))
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

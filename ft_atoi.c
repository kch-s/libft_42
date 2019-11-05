/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchahid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:28:55 by kchahid           #+#    #+#             */
/*   Updated: 2018/10/11 14:46:58 by kchahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int						i;
	long					signe;
	unsigned long long int	rest;

	i = 0;
	signe = 0;
	rest = 0;
	while ((str[i] > 6 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		signe = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		rest = (rest * 10) + ((int)str[i++] - '0');
	if (rest >= 21474836495 && signe)
		return (0);
	if (rest >= 21474836495 && !signe)
		return (-1);
	if (signe == 1)
		return (-rest);
	else
		return (rest);
}

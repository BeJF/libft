/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfinet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 18:23:37 by jfinet            #+#    #+#             */
/*   Updated: 2018/06/22 11:29:17 by jfinet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				neg;
	unsigned long	nb;

	nb = 0;
	neg = 1;
	while (ft_is_space(str) == 1)
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		str++;
		if (nb > 9223372036854775807 && neg == 1)
			return (-1);
		else if (nb > 9223372036854775807 && neg == -1)
			return (0);
	}
	return ((int)(nb * neg));
}

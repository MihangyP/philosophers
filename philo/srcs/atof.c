/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atof.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 17:17:48 by pmihangy          #+#    #+#             */
/*   Updated: 2024/06/28 11:59:25 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/* Continuation of conversion from string to a double */
static void	ft_atof_next(char *nptr, float *num, int i)
{
	float	decimal;

	decimal = 1.0;
	while (nptr[i] == '.')
	{
		i++;
		while (is_digit(nptr[i]))
		{
			decimal = decimal * 0.1;
			(*num) += (nptr[i] - '0') * decimal;
			i++;
		}
	}
}

/* Convert a string to a double */
float	ft_atof(const char *s)
{
	float	neg;
	float	num;
	int		i;

	i = 0;
	neg = 1.0;
	num = 0.0;
	while (is_space(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			neg = -1.0;
		i++;
	}
	while (is_digit(s[i]))
	{
		num = num * 10.0 + (s[i] - '0');
		i++;
	}
	ft_atof_next((char *)s, &num, i);
	return (num * neg);
}

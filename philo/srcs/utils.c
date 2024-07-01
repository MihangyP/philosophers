/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:58:04 by pmihangy          #+#    #+#             */
/*   Updated: 2024/07/01 12:41:51 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

size_t	is_digit(const char c)
{
	return (c >= 48 && c <= 57);
}

size_t	is_space(char c)
{
	return (c == 32 || (c >= 8 && c <= 13));
}

void	write_in_specific_color(char *s, int color)
{
	printf("\x1b[1;%dm%s\x1b[0m", color, s);
}

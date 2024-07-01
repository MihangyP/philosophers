/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:30:48 by pmihangy          #+#    #+#             */
/*   Updated: 2024/07/01 12:39:27 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	show_args_not_number_mess(void)
{
	write_in_specific_color("ERROR:", RED);
	printf(" Arguments should be numbers\n");
	exit(69);
}

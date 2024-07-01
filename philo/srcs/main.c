/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:35:42 by pmihangy          #+#    #+#             */
/*   Updated: 2024/07/01 14:09:14 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int ac, char **av)
{
	t_data	data;

	handle_errors(ac, av);
	catch_data(ac, av, &data);
	printf("number_of_philosophers:  %d\n", data.number_of_philosophers);
	printf("time_to_die: %f\n", data.time_to_die);
	printf("time_to_eat: %f\n", data.time_to_eat);
	printf("time_to_sleep: %f\n", data.time_to_sleep);
	printf("number_of_times_each_philosopher_must_eat: %d\n", data.number_of_times_each_philosopher_must_eat);
	return (0);
}

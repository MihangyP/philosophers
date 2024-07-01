/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:43:19 by pmihangy          #+#    #+#             */
/*   Updated: 2024/07/01 12:54:56 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

static void	usage_message(void)
{
	printf("Usage: number_of_philosophers "
		"time_to_die time_to_eat time_to_sleep "
		"[number_of_times_each_philosopher_must_eat]\n");
	printf("- number_of_philosophers: in integer\n");
	printf("- time_to_die: in milliseconds\n");
	printf("- time_to_eat: in milliseconds\n");
	printf("- time_to_sleep: in milliseconds\n");
	printf("- number_of_time_each_philosopher_must_eat: in integer\n");
}

static void	handle_number_of_arguments_errors(int ac)
{
	if (ac < 5)
	{
		write_in_specific_color("ERROR:", RED);
		printf(" Missing Arguments\n");
	}
	else if (ac > 6)
	{
		write_in_specific_color("ERROR:", RED);
		printf(" Excess arguments\n");
	}
	usage_message();
	exit(69);
}

static void	handle_arguments_errors_next(int ac, char **av)
{
	int		i;
	int		j;
	size_t	found_dot;

	i = 1;
	found_dot = 0;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
		{
			if (av[i][j] == '.')
				++found_dot;
			if (found_dot != 1 && found_dot != 0)
				show_args_not_number_mess();
			if (!is_digit(av[i][j]) && av[i][j] != '.')
				show_args_not_number_mess();
		}
	}
}

static void	handle_arguments_errors(int ac, char **av)
{
	int	number_of_philosophers;

	number_of_philosophers = ft_atoi(av[1]);
	if (0 == number_of_philosophers)
	{
		write_in_specific_color("ERROR:", RED);
		printf(" number_of_philosophers should be ");
		write_in_specific_color("number", RED);
		printf(" different of 0\n");
		exit(69);
	}
	handle_arguments_errors_next(ac, av);
}

void	handle_errors(int ac, char **av)
{
	if (ac < 5 || ac > 6)
		handle_number_of_arguments_errors(ac);
	else
		handle_arguments_errors(ac, av);
}

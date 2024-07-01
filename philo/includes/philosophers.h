/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmihangy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:37:14 by pmihangy          #+#    #+#             */
/*   Updated: 2024/07/01 12:49:28 by pmihangy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <string.h>

/* philosophers data */
typedef struct s_data
{
	int		number_of_philosophers;
	int		number_of_times_each_philosopher_must_eat;
	float	time_to_die;
	float	time_to_eat;
	float	time_to_sleep;
}	t_data;

/* errors functions prototypes */
void	handle_errors(int ac, char **av);
/* ft_atoi prototype */
int		ft_atoi(const char *s);
/* ft_atof prototype */
float	ft_atof(const char *s);
/* utils */
void	write_in_specific_color(char *s, int color);
size_t	is_space(char c);
size_t	is_digit(char c);
/* errors utils */
void	show_args_not_number_mess(void);
/* catch data */
void	catch_data(int ac, char **av, t_data *data);

/* ANSI escape code to color text */
enum e_color
{
	RED = 31,
	GREEN = 32,
	YELLOW = 33
};

#endif

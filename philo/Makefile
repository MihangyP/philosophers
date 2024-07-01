# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmihangy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 14:39:38 by pmihangy          #+#    #+#              #
#    Updated: 2024/07/01 12:57:11 by pmihangy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ARGUMENTS ##

NAME = philo
SRCS_FILES = main.c errors.c errors_utils.c atoi.c atof.c utils.c catch_data.c
SRCS = $(addprefix srcs/, $(SRCS_FILES))
CC = cc
CFLAGS = -Wall -Wextra -pthread
RM = rm -rf
INCLUDE = -I./includes

## RULES ##

all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDE) -o $(NAME) $(SRCS)

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re

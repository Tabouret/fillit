# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pollier <pollier@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 14:07:27 by elacombe          #+#    #+#              #
#    Updated: 2015/12/15 07:39:42 by pollier          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

SOURCE =	ft_fillit_is_i.c	\
			ft_fillit_is_j.c	\
			ft_fillit_is_l.c	\
			ft_fillit_is_o.c	\
			ft_fillit_is_s.c	\
			ft_fillit_is_t.c	\
			ft_fillit_is_z.c	\
			ft_fillit_print.c	\
			ft_fillit_fits_i.c	\
			ft_fillit_fits_j.c	\
			ft_fillit_fits_t.c	\
			ft_fillit_fits_o.c	\
			ft_fillit_fits_l.c	\
			ft_fillit_fits_s.c	\
			ft_fillit_fits_z.c	\
			ft_fillit_alloc.c	\
			ft_fillit_solve.c	\
			ft_lib.c			\
			main.c

FLAGS = -Wall -Wextra -Werror

NAME = fillit

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -c $(SOURCE)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -Rf $(OBJ)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

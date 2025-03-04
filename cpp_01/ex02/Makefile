# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctacconi <ctacconi@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 17:54:50 by ctacconi          #+#    #+#              #
#    Updated: 2025/02/13 18:23:57 by ctacconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HiThisIsBrain

SRC = main.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

OBJ = $(SRC:.cpp=.o)

RM = rm -f

%.o: %.cpp Makefile
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) Makefile
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 17:25:48 by carolinatac       #+#    #+#              #
#    Updated: 2025/05/20 18:11:24 by ctacconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRC = main.cpp ScalarConverter.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

HEAD = ScalarConverter.hpp

OBJ = $(SRC:.cpp=.o)

RM = rm -f

%.o: %.cpp Makefile $(HEAD)
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

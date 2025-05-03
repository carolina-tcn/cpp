# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: carolinatacconis <carolinatacconis@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 17:54:50 by ctacconi          #+#    #+#              #
#    Updated: 2025/05/03 17:27:20 by carolinatac      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract_class

SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp \
	Brain.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

HEAD = AAnimal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.cpp Brain.hpp

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

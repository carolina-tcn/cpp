# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctacconi <ctacconi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/06 17:25:48 by carolinatac       #+#    #+#              #
#    Updated: 2025/05/20 17:35:18 by ctacconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = coffe_making

SRC = \
	main.cpp \
	Bureaucrat/Bureaucrat.cpp \
	AForm/AForm.cpp \
	AForm/PresidentialPardonForm/PresidentialPardonForm.cpp \
	AForm/RobotomyRequestForm/RobotomyRequestForm.cpp \
	AForm/ShrubberyCreationForm/ShrubberyCreationForm.cpp \
	Bureaucrat/Intern/Intern.cpp

CC = c++

INCLUDES = -IBureaucrat -IAForm -IAForm/PresidentialPardonForm -IAForm/RobotomyRequestForm \
	-IAForm/ShrubberyCreationForm -IBureaucrat/Intern

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic $(INCLUDES)

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

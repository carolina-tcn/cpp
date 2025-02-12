# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctacconi <ctacconi@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 17:54:50 by ctacconi          #+#    #+#              #
#    Updated: 2025/02/12 18:01:40 by ctacconi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = 

CC = cc+

FLAGS = -Wall -Wextra -Werror

HEAD = 

OBJ = $(SRC:.c=.o)

RM = rm -f

%.o: %.c Makefile $(HEAD)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

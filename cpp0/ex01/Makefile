# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/11 18:29:19 by lumiguel          #+#    #+#              #
#    Updated: 2025/06/26 14:59:10 by lumiguel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++

SRC = Phonebook.cpp \
	  Contacts.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(NAME)

fclean: clean
	@rm -f $(NAME)

re: clean all

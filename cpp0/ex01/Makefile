# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/11 18:29:19 by lumiguel          #+#    #+#              #
#    Updated: 2025/07/15 10:48:10 by lumiguel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = g++

SRC = Phonebook.cpp \
	  Contacts.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(NAME)

fclean: clean
	@rm -f $(NAME)

re: clean all

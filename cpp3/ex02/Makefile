# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumiguel <lumiguel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 09:28:54 by lumiguel          #+#    #+#              #
#    Updated: 2025/08/25 12:27:33 by lumiguel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clap3
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

SRC = main.cpp \
	  ClapTrap.cpp \
	  ScavTrap.cpp \
	  FragTrap.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ) $(NAME)

fclean: clean
	@rm -f $(NAME)

re: clean all

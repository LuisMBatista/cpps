# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 14:35:56 by lumiguel          #+#    #+#              #
#    Updated: 2025/07/22 12:22:00 by lumiguel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Violence
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = g++

SRC = main.cpp \
	  Weapon.cpp \
	  HumanA.cpp \
	  HumanB.cpp \

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

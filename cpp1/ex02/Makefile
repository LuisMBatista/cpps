# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 13:55:21 by lumiguel          #+#    #+#              #
#    Updated: 2025/07/22 12:21:19 by lumiguel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brains
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = g++

SRC = main.cpp \

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

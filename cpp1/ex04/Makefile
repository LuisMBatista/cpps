# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumiguel <lumiguel@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 15:01:08 by lumiguel          #+#    #+#              #
#    Updated: 2025/07/22 12:22:19 by lumiguel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Sed
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = g++

SRC = main.cpp \
	  sed.cpp \

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

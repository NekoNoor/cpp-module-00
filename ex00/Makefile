# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nschat <nschat@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/13 21:15:00 by nschat        #+#    #+#                  #
#    Updated: 2021/04/29 15:19:28 by nschat        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

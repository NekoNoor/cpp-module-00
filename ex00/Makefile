# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nschat <nschat@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/13 21:15:00 by nschat        #+#    #+#                  #
#    Updated: 2021/03/31 15:43:56 by nschat        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nschat <nschat@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/13 21:15:00 by nschat        #+#    #+#                  #
#    Updated: 2021/04/07 12:46:49 by nschat        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	  Contact.cpp

OBJ = $(SRC:.cpp=.o)

NAME = myawesomephonebook

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

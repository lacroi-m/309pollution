##
## Makefile for  in /home/ze/308reedpipes
## 
## Made by ze
## Login   <maxime.lacroix@epitech.eu>
## 
## Started on  Thu Jan 11 23:41:29 2018 ze
## Last update Wed Jan 17 22:37:47 2018 DESKTOP-FQFT07H
##

CPP	= g++ -I./incs -Wall -Wextra -Werror -std=c++11

NAME	= 309pollution

RM	= rm -f

SRC	 = $(foreach dir,$(shell find srcs -type d),$(wildcard $(dir)/*.cpp))

OBJ     = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):$(OBJ)
	$(CPP) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:     fclean all

.PHONY: all clean fclean re

%.o: %.cpp
	$(CPP) -c $< -o $@ $(CFLAGS)

.PHONY: all clean fclean re

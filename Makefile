# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sergiopax <sergiopax@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 09:32:51 by spax              #+#    #+#              #
#    Updated: 2021/12/23 13:58:44 by sergiopax        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -g

RM			= rm -f

NAME		= push_swap
LIB_PATH	= ./libft

LIBRARY		= libft.a

MAKE		= make

SRC			= main.c \
			create_stacks.c \
			pa.c \
			pb.c \
			ra.c \
			rr.c \
			rra.c \
			rrb.c \
			rrr.c \
			sa.c \
			sb.c \
			ss.c \
			short_sort.c \

OBJ			= ${SRC:.c=.o}

all:		$(NAME)

$(LIBRARY):
			$(MAKE) -C $(LIB_PATH)

$(NAME):	$(OBJ) $(LIBRARY)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L $(LIB_PATH) -lft

push:		$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L $(LIB_PATH) -lft

clean:		
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re push $(LIBRARY)
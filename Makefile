# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 17:50:19 by ecarvalh          #+#    #+#              #
#    Updated: 2023/11/13 13:08:43 by ecarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= $(filter-out $(wildcard *_bonus.c), $(wildcard *.c))
B_SRCS	= $(wildcard *_bonus.c)
B_OBJS	= $(B_SRCS:.c=.o)
OBJS	= $(SRCS:.c=.o)
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(B_OBJS)
	ar rc $(NAME) $(OBJS) $(B_OBJS)

.PHONY: all clean fclean re bonus

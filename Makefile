# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 17:50:19 by ecarvalh          #+#    #+#              #
#    Updated: 2023/10/06 20:19:01 by ecarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= $(wildcard ft_*.c)
OBJS	= $(SRCS:.c=.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar vrcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

#bonus: $(OBJS) $(BONUS_OBJS)
#	ar vrcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus

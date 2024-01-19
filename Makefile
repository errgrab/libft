# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 17:50:19 by ecarvalh          #+#    #+#              #
#    Updated: 2024/01/19 13:05:24 by ecarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SDIR	= src/ft_ctype .
SRCS	= $(foreach dir,$(SDIR), $(wildcard $(dir)/ft_*.c))
OBJS	= $(SRCS:.c=.o)
CFLAGS	= -Wall -Wextra -Werror -I. -Iinclude
NAME	= libft.a

vpath %.c $(SDIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) r $(NAME) $(OBJS)

bonus: $(NAME)

clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus

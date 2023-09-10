# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecarvalh <ecarvalh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 17:47:31 by ecarvalh          #+#    #+#              #
#    Updated: 2023/09/10 23:14:27 by ecarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_atoi.c ft_bzero.c ft_calloc.c ft_memset.c ft_memcpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strlcpy.c ft_strlcat.c \
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_toupper.c ft_tolower.c
OBJS	= $(SRCS:.c=.o)
CC		= cc
CFLAGS	= -Wall -Werror -Wextra -I.
RM		= rm -f
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar vrcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar vrcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus

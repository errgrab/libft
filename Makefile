# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 17:50:19 by ecarvalh          #+#    #+#              #
#    Updated: 2024/03/14 19:20:05 by ecarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang
SDIR	= src/ctype src/list src/stdio src/stdlib src/string src/printf \
		src/printf/fun
SRCS	= $(foreach dir,$(SDIR), $(wildcard $(dir)/ft_*.c))
ODIR	= objs
OBJS	= $(addprefix $(ODIR)/,$(SRCS:.c=.o))
CFLAGS	= -O3 -Wall -Wextra -Werror -I.
NAME	= libft.a

vpath %.c $(SDIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) r $(NAME) $(OBJS)

$(ODIR)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME)

clean:
	$(RM)r $(ODIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

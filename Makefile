# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 17:50:19 by ecarvalh          #+#    #+#              #
#    Updated: 2024/01/23 00:40:33 by ecarvalh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SDIR	= src/ft_ctype src/ft_list src/ft_stdio src/ft_stdlib src/ft_string
SRCS	= $(foreach dir,$(SDIR), $(wildcard $(dir)/ft_*.c))
ODIR	= objs
OBJS	= $(addprefix $(ODIR)/,$(SRCS:.c=.o))
CFLAGS	= -Wall -Wextra -Werror -I. -Iinclude
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

CC		= cc
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

love:
	@echo 'not war?'

.PHONY: all clean fclean re bonus love

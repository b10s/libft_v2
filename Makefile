NAME=libft.a
OBJECTS:=$(patsubst %.c,%.o,$(wildcard ft_*.c))
CFLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -srv $(NAME) $(OBJECTS)

clean:
	-rm $(OBJECTS)

fclean: clean
	-rm $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

bonus:
	echo "TODO!"

.PHONY=all clean fclean re

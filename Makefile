all:
	cc -Wall -Wextra -Werror -c ft_*.c

lib: all
	ar -srv libft.a ft_*.o

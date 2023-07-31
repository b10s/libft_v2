NAME := libft.a

SOURCES_PART1 := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
					ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
					ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
					ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
					ft_atoi.c ft_calloc.c ft_strdup.c

SOURCES_PART2 := ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
					ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c

SOURCES_BONUS := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
					ft_lstmap.c

OBJECTS := $(patsubst %.c, %.o, $(SOURCES_PART1) $(SOURCES_PART2))
OBJECTS_BONUS := $(patsubst %.c, %.o, $(SOURCES_BONUS))
CFLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -srv $(NAME) $?

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS) bonus

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

bonus: $(OBJECTS_BONUS) $(NAME)
	ar -srv $(NAME) $?
	touch bonus

.PHONY=all clean fclean re bonus


# can i produce empty files for need of Make?
# doublecheck nor doc for all needed targets
# should all include bonus or not?
# explicitly use cc and CLFLAGS
# remove * and use list of files
# ensure no relink
# why we need NAME rule?
# what is the diff btw clean and fclean?
# finish rule bonus (ensure if all should include bonus or not)
# make sure if NAME should include bonus or not
# what to do with header for bonus? separate one?
# rename files to make sure they are _bonus.{c,h}
# make sure additional functions are static in all .c files!
# move struct to bonus header
# use struct in split func instead of array (or in libft.h as stated in task desc?)
# 	reconsider names

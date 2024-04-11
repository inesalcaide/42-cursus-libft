CFILES = ft_strlen.c ft_memset.c

OFILES = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME) clean

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean:
	clean rm -f $(NAME)

re:
	fclean $(NAME)

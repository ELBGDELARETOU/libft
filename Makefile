FLAGS = -Wall -Werror -Wextra

CC = gcc

RM = rm -f

NAME = libft.a

SOURCES = ft_atoi.c, ft_bzero.c, ft_calloc, ft_isalnum.c, ft_isalpha.c, ft_isascii.c, ft_isdigit.c, ft_isprint.c, ft_isitoa.c, ft_memchr.c, ft_memcpy.c, ft_memmove.c, ft_memset.c, ft_putchar_fd.c, ft_putendl_fd.c, ft_putnbr_fd.c, ft_putstr_fd.c, ft_split.c, ft_strchr.c, ft_strdup.c, ft_strjoin.c, ft_strlcat, ft_strlcpy.c, ft_strlen.c, ft_strmapi.c, ft_strncmp.c, ft_strnstr.c, ft_strtrim.c, ft_substr.c, ft_tolower.c, ft_toupper.c

OBJS			= $(SRCS:.c=.o)

all: $(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean
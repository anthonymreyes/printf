NAME = libftprintf.a
CC = gcc 
CFLAGS = -Wall -Wextra -Werror -g

SRCS = ft_printf.c ft_hexa.c ft_hexa_u.c ft_intlen.c ft_pointer.c ft_putchar.c\
ft_putstr.c ft_unslen.c

OBJS = $(SRCS:.c=.o)

RM = rm -rf

$(NAME):	${OBJS}
	ar rcs ${NAME} ${OBJS}
			
all:	${NAME}

clean:
	${RM} ${OBJS}
		
fclean:	clean
	${RM} ${NAME}
		
re:	fclean all

.PHONY:	all clean fclean re
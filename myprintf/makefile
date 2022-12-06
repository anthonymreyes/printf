NAME	= libftprintf.a
cc		=	 gcc -g
CFLAGS	= -Wall -Wextra -Werror 

SRCS	= ft_printf.c ft_hexa.c ft_intlen.c ft_pointer.c ft_putchar.c\
			ft_putstr.c ft_unslen.c\

OBJS	= $(SRCS:.c=.o)

$(NAME): ${OBJS}
			ar rcs ${NAME} ${OBJS}
			
all:	${NAME}

clean:
		${RM} ${OBJS}
		
fclean:	clean
		${RM} ${NAME}
		
re:		fclean all
NAME	= libftprintf.a
cc		=	 gcc
CFLAGS	= -Wall -Wextra -Werror 

SRCS	= ft_printf.c ft_functions01.c ft_functions02.c

OBJS	= $(SRCS:.c=.o)

$(NAME): ${OBJS}
			ar rcs ${NAME} ${OBJS}
			
all:	${NAME}

clean:
		${RM} ${OBJS}
		
fclean:	clean
		${RM} ${NAME}
		
re:		fclean all
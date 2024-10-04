CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = .c

OBJS = ${SRCS:.c = .o}

NAME = libft.a

RM = rm -f




${NAME} : 	${OBJS}
	${CC} -o ${NAME} ${OBJS}

.c.o : ${CC} ${CFLAGS} -c $< -o ${<:.c = .o}

all : ${NAME}

clean : ${RM} ${OBJS}

fclean : 	clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re

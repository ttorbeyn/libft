SRCS    = srcs/cd d
INCS    = includes
OBJS    = ${SRCS:.c=.o}
NAME    = libft.a
CC      = gcc
LIBC    = ar rc
LIBR    = ranlib
CFLAGS  = -Wall -Werror -Wextra
RM      = rm -f
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}
${NAME}:	${OBJS}
			${LIBC} ${NAME} ${OBJS}
			${LIBR} ${NAME}
all:		${NAME}
clean:
			${RM} ${OBJS}
fclean:		clean
			${RM} ${NAME}
re:			fclean
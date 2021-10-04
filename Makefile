
SRCS	=	main.c ft_isalpha.c ft_isdigit.c
OBJS	=	${SRCS:.c=.o}
NAME	=	ftlib
FLAGS	=	-Wall -Wextra -Werror

all: ${OBJS}
		gcc ${FLAGS} ${OBJS} -o ${NAME}

clean:
		rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME

main:
		gcc ${FLAGS} main.c


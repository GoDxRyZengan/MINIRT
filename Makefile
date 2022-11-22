SRCS		= ./srcs/main.c

OBJS		= ${SRCS:.c=.o}

NAME		= miniRT

MLX_PATH	= ./mlx/
MLX_NAME	= $(MLX_PATH)libmlx_Linux.a

INC		= ./includes

CC		= gcc -Wall -Werror -Wextra -g
RM		= rm -f

CFLAGS		= -lm -lmlx -lXext -lX11

all:		${NAME}

.c.o:
		${CC} -I${INC} -I${MLX_PATH} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
		make -C ${MLX_PATH}
		${CC} ${OBJS} ${MLX_NAME} -L${MLX_PATH} -I${INC} -I${MLX_PATH} ${CFLAGS} -o${NAME}

clean:		
		make clean -C ${MLX_PATH}
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all
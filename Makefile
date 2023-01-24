NAME = push_swap
NAME_B = checker
CFILES = check_arg.c \
	     check_double.c \
		 creat_stack.c \
		 ft_atoi.c \
		 ft_split.c \
		 ft_strjoin.c \
		 ft_strlen.c \
		 mouve.c \
		 sort_smol.c\
		 mouve1.c\
		 mouve2.c\
		 sort.c \
		 utils.c \
		 sort500.c \
		 push_swap.c\
		 ft_isdigit.c
CFILES_B = bonus/check_arg_bonus.c \
	       bonus/check_double_bonus.c \
		   bonus/creat_stack_bonus.c \
		   bonus/ft_atoi_bonus.c \
		   bonus/ft_split_bonus.c \
		   bonus/ft_strjoin_bonus.c \
		   bonus/mouve_bonus.c \
		   bonus/sort_smol_bonus.c \
		   bonus/mouve1_bonus.c \
		   bonus/mouve2_bonus.c \
		   bonus/sort_bonus.c \
		   bonus/utils_bonus.c \
		   bonus/sort500_bonus.c \
		   bonus/get_next_line.c \
		   bonus/get_next_line_utils.c \
		   bonus/ft_move_bonus.c \
		   bonus/ft_read_bonus.c \
		   bonus/ft_strcmp_bonus.c \
		   bonus/ft_isdigit_bonus.c \
		   bonus/push_swap_bonus.c

OBJ = ${CFILES:.c=.o}
OBJ_B = ${CFILES_B:.c=.o}
FLAG = -Wall -Werror -Wextra #-fsanitize=address -g3
CC = cc
LI = ar rc
RM = rm -rf

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${FLAG} ${OBJ} -o ${NAME}

bonus : ${NAME_B}

${NAME_B} : ${OBJ_B}
		${CC} ${FLAG} ${OBJ_B} -o ${NAME_B}

clean :
	${RM} ${OBJ} ${OBJ_B}

fclean : clean
	${RM} ${NAME} ${NAME_B}

re : fclean all

.PHONY: all bonus clean fclean re
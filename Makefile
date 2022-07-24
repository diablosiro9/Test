# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 16:02:58 by dojannin          #+#    #+#              #
#    Updated: 2022/07/19 10:18:37 by dojannin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

OBJ = $(SRCS:.c=.o)

CFLAGS += -Wall -Wextra -Werror -g -fsanitize=address

SRCS = rules.c \
		cases.c \
		cases2.c \
		case_five.c \
		ft_lst.c \
		ft_lst2.c \
		main.c \
		utils.c \
		utils2.c \
		max_min_pos.c \

$(NAME):		$(OBJ)
						gcc ${CFLAGS} $(OBJ) -o $(NAME)

all:			$(NAME)

clean:			
				rm -f $(OBJ)

fclean:			clean
					rm -f $(NAME)

norme:
					norminette -R CheckForbiddenSourceHeader $(SRCS) 

re:				fclean all

.PHONY :		all clean fclean re

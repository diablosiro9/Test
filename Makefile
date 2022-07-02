# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 16:02:58 by dojannin          #+#    #+#              #
#    Updated: 2022/07/02 16:08:49 by dojannin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

OBJ = $(SRCS:.c=.o)

CFLAGS += -Wall -Wextra -Werror -g -fsanitize=address

SRCS = rules.c \
		cases.c \
		cases2.c \
		ft_lst.c \
		main.c \
		utils.c \

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

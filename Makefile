# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dojannin <dojannin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 16:02:58 by dojannin          #+#    #+#              #
#    Updated: 2022/07/18 15:21:53 by dojannin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

OBJ = $(SRCS:.c=.o)

CFLAGS += -Wall -Wextra -Werror -g -fsanitize=address

SRCS = rules.c \
		cases.c \
		cases2.c \
		ft_lst.c \
		ft_lst2.c \
		main.c \
		utils.c \
		utils2.c \
		utils3.c \

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

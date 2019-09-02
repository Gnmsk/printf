# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbruen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 11:37:13 by dbruen            #+#    #+#              #
#    Updated: 2019/08/15 11:37:17 by dbruen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = parser.c format_checker.c ft_printf.c extract_number.c extract_unicode.c\
extract_string.c extract_float.c apply_format.c format.c apply_utils.c

OBJECT = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

INCLUDES = ./

all: $(NAME)

$(NAME):
	@make -C libft/ re
	@gcc -I $(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECT) ./libft/*.o
	@ranlib $(NAME)
	
clean:
	@/bin/rm -f $(OBJECT)
	@make -C libft/ clean
	
fclean: clean
	@/bin/rm -f $(NAME)
	@make -C libft/ fclean
	
re: fclean all

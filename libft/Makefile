# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarcel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/14 10:44:54 by amarcel           #+#    #+#              #
#    Updated: 2018/11/28 16:23:53 by amarcel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Werror -Wextra
SRC = ft_atoi.c\
	  ft_isdigit.c\
	  ft_memcpy.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_tolower.c\
	  ft_bzero.c\
	  ft_isprint.c\
	  ft_memmove.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_toupper.c\
	  ft_isalnum.c\
	  ft_memccpy.c\
	  ft_memset.c\
	  ft_strdup.c\
	  ft_strnstr.c\
	  ft_isalpha.c\
	  ft_memchr.c\
	  ft_strcat.c\
	  ft_strlen.c\
	  ft_strrchr.c\
	  ft_isascii.c\
	  ft_memcmp.c\
	  ft_strchr.c\
	  ft_strlcat.c\
	  ft_strncat.c\
	  ft_strstr.c\
	  ft_memalloc.c\
	  ft_memdel.c\
	  ft_strnew.c\
	  ft_strdel.c\
	  ft_strclr.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_strsub.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_strsplit.c\
	  ft_itoa.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_putendl.c\
	  ft_putnbr.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_lstnew.c\
	  ft_lstdelone.c\
	  ft_lstdel.c\
	  ft_lstadd.c\
	  ft_lstiter.c\
	  ft_lstmap.c\
	  ft_swap.c\
	  ft_recursive_factorial.c\
	  ft_strrev.c\
	  ft_intlen.c\
	  ft_strupcase.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -c $(SRC)
	ar r $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:  fclean all

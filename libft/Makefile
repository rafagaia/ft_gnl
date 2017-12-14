# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgaia <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 21:33:28 by rgaia             #+#    #+#              #
#    Updated: 2017/12/08 19:19:54 by rgaia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c \
		ft_lstiter.c ft_lstnew.c ft_lstmap.c ft_memalloc.c ft_memccpy.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c \
		ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
		ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c \
		ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
		ft_striteri.c ft_strjoin.c ft_strlen.c ft_strlcat.c ft_strmap.c ft_strmapi.c \
		ft_strncat.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c \
		ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c \
		ft_strtrim.c ft_tolower.c ft_toupper.c ft_isblank.c ft_islower.c ft_isupper.c \
		ft_isdelim.c ft_numdigit.c ft_iswhitespace.c ft_strblank.c ft_strnword.c \
		ft_strndup.c ft_chrsub.c ft_lstadd_back.c ft_abs.c ft_strdup_ff.c \
		ft_strjoin_ff.c \

OFILES = $(SRC:.c=.o)

FLAGS = -c -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		@gcc $(FLAGS) $(SRC)
		@ar -rcs $(NAME) $(OFILES)

clean:
		@rm -rf $(OFILES)

fclean: clean
		@rm -rf $(NAME)

re: fclean 
	@make


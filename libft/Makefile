#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoulomb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 22:08:39 by acoulomb          #+#    #+#              #
#    Updated: 2018/04/23 14:13:32 by acoulomb         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.PHONY: re all clean fclean
.SUFFIXES:

NAME = libft.a

SRC =	ft_putchar.c \
		ft_isascii.c \
		ft_memset.c \
		ft_putnbr_fd.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_strstr.c \
		ft_isdigit.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_strcpy.c \
		ft_strmap.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_isprint.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strdup.c \
		ft_strndup.c \
		ft_strncat.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_itoa.c \
		ft_putendl.c \
		ft_strcat.c \
		ft_striter.c \
		ft_strncmp.c \
		ft_isalnum.c \
		ft_memalloc.c \
		ft_putendl_fd.c \
		ft_striteri.c \
		ft_strncpy.c \
		ft_isalpha.c \
		ft_memcpy.c \
		ft_putnbr.c \
		ft_strclr.c \
		ft_strlcat.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memchr.c \
		ft_strnstr.c \
		ft_memcmp.c \
		ft_memdel.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_intlen.c \
		ft_putstr_color.c \
		ft_count_words.c \
		ft_islower.c \
		ft_isupper.c \
		ft_str_is_uppercase.c \
		ft_str_is_lowercase.c \
		ft_swap.c

OBJS = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $^ && ranlib $(NAME)

%.o : %.c
	gcc $(FLAGS) -c $^

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

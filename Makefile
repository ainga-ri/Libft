# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ainga-ri <ainga-ri@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 12:46:24 by ainga-ri          #+#    #+#              #
#    Updated: 2022/10/02 12:45:57 by ainga-ri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	   ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_memset.c \
	   ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	   ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

CC = gcc

LIBS = libft.h

DEPS = $(SRCS:.c=.d) $(SRCS_BONUS:.c=.d)

CFLAGS = -Werror -Wextra -Wall -MMD

OBJS = $(SRCS:%.c=%.o)

OBJS_BONUS = $(SRCS_BONUS:%.c=%.o)

%.o: %.c
	$(CC) $(CFLAGS) -I./ -c $< -o $@

$(NAME): $(OBJS) $(LIBS)
	ar -rcs $(NAME) $(OBJS)

.PHONY: all clean fclean re

-include $(DEPS)

all: $(NAME)

bonus: $(OBJS_BONUS) $(LIBS)
	ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)
	@touch $@

clean:
	rm -f  $(OBJS) $(OBJS_BONUS)
	rm -f $(DEPS)
	
fclean: clean
	rm -f $(NAME)
	rm -f bonus

re: fclean all

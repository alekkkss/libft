# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alx <alx@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 11:05:52 by afedida           #+#    #+#              #
#    Updated: 2023/06/03 20:24:37 by alx              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c		\
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_itoa.c		\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_memset.c		\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_split.c		\
		ft_strchr.c		\
		ft_strdup.c		\
		ft_striteri.c	\
		ft_strjoin.c	\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c		\
		ft_strmapi.c	\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strtrim.c	\
		ft_substr.c		\
		ft_tolower.c	\
		ft_toupper.c

SRCSB = ft_lstnew.c

NAME = libft.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJS_PRE = $(addprefix $(OBJS_DIR), $(OBJS))

OBJSB_DIR = _bonus/objs_bonus/
OBJSB = $(SRCSB:.c=.o)
OBJSB_PRE = $(addprefix $(OBJSB_DIR), $(OBJSB))

CC = clang

CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang $(CC_FLAGS) -c $< -o $@

$(OBJSB_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJSB_DIR)
	@echo "Compiling: $<"
	@clang $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS_PRE)
	@ar r $(NAME) $(OBJS_PRE)
	@echo "Libft Done !"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)
	rm -rf $(OBJSB_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJSB_PRE)
	@ar r $(NAME) $(OBJSB_PRE)
	@echo "Libft Bonus Done !"

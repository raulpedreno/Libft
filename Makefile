# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/25 09:38:11 by rpedreno          #+#    #+#              #
#    Updated: 2025/11/25 09:38:11 by rpedreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SOURCES = \
		ft_isalnum.c\
		ft_bzero.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memset.c\
		ft_strlen.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_striteri.c\
		ft_strmapi.c\
<<<<<<< HEAD

OBJECTS = $(SOURCES:.c=.o)
=======
	
BONUS_SOURCES = \
			ft_lstadd_back_bonus.c\
			ft_lstnew_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstmap_bonus.c\

OBJECTS = $(SOURCES:.c=.o)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)
>>>>>>> 66cc539 (Bonus)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
<<<<<<< HEAD
	ar -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) 
=======
	ar rsc $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME) $(BONUS_OBJECTS)
	ar rcs $(NAME) $(OBJECTS) $(BONUS_OBJECTS)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)
>>>>>>> 66cc539 (Bonus)

fclean: clean
	rm -f $(NAME)

re: fclean all

<<<<<<< HEAD
.PHONY: all clean fclean re
=======
.PHONY: all clean fclean re bonus
>>>>>>> 66cc539 (Bonus)

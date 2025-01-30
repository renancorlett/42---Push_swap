# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/28 10:31:59 by rcorlett          #+#    #+#              #
#    Updated: 2025/01/28 11:42:25 by rcorlett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
RM = rm -rf
SRCS = $(addprefix $(SRC_DIR)/, main.c radix_sort.c operations.c utils.c small_sort.c)
OBJS = $(SRCS:.c=.o)
HEADERS = -I include -I $(LIBFT_DIR)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "$(NAME) Created Successfully."
		
$(LIBFT):
	@make -C $(LIBFT_DIR)
	@echo "Libft Compiled Successfully."
		
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@
	@echo "Compiled $< into $@."

clean:
	@$(RM) $(OBJS)
	@make -C $(LIBFT_DIR) clean
		@echo "Cleaned Object Files."

fclean: clean
	@$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@echo "Cleaned Libraries and Executable."

re: fclean all
	@echo "Rebuilt Project."

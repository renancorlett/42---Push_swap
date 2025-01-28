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
CC = CC
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
RM = rm -rf
SRCS = $(addprefix $(SRC_DIR)/, main.c radix_sort.c operations.c utils.c small_sort.c)
OBJS = $(SRCS: .c=.o)
HEADERS = -I include -I $(LIBFT_DIR)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
		@echo "$(BMAG) $(NAME) created $(BGRN)successfully."
		
$(LIBFT):
		@make -C $(LIBFT_DIR)
		@echo "$(BMAG)Libft compiled $(BGRN)successfully."
		
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
		@$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@
		@echo "$(BGRN)Compiled $< into $@."

clean:
		@$(RM) $(OBJS)
		@make -C $(LIBFT_DIR) clean
		@echo "$(BYEL)Cleaned object files."

fclean: clean
		@$(RM) $(NAME)
		@make -C $(LIBFT_DIR) fclean
		@echo "$(BYEL)Cleaned libraries and executable."

re: 	fclean all
		@echo "$(RED)Rebuilt project."

-COLORS RULES-

BLA			:= $(echo "u001b[30m")
RED			:= $(echo "\u001b[31m")
GRN			:= $(echo "\u001b[32m")
YEL			:= $(echo "\u001b[33m")
BLU			:= $(echo "\u001b[34m")
MAG			:= $(echo "\u001b[35m")
CYA			:= $(echo "\u001b[36m")
WHI			:= $(echo "\u001b[37m")
GRE			:= $(echo "\u001b[0m")
BBLA	:= $(echo "\u001b[30;1m")
BRED 	:= $(echo "\u001b[31;1m")
BGRN	:= $(echo "\u001b[32;1m")
BYEL	:= $(echo "\u001b[33;1m")
BBLU	:= $(echo "\u001b[34;1m")
BMAG	:= $(echo "\u001b[35;1m")
BCYA	:= $(echo "\u001b[36;1m")
BWHI	:= $(echo "\u001b[37;1m")
Reset	:= $(echo "\u001b[0m")

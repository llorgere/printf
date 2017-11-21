# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llorgere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/15 12:55:31 by llorgere          #+#    #+#              #
#    Updated: 2017/06/21 17:42:08 by llorgere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c \
	  ft_watinit.c \
	  ft_size_tab.c \
	  ft_what_type.c \
	  ft_arg_conv.c \
	  ft_strndup.c \
	  ft_ctoa.c \
	  ft_imtoa.c \
	  ft_litoa.c \
	  ft_llitoa.c \
	  ft_sitoa.c \
	  ft_ssttoa.c \
	  ft_uctoa.c \
	  ft_uimtoa.c \
	  ft_uitoa.c \
	  ft_luitoa.c \
	  ft_lluitoa.c \
	  ft_suitoa.c \
	  ft_sttoa.c \
	  ft_ch_to_octal.c \
	  ft_uim_to_octal.c \
	  ft_int_to_octal.c \
	  ft_lg_to_octal.c \
	  ft_llg_to_octal.c \
	  ft_sh_to_octal.c \
	  ft_st_to_octal.c \
	  ft_ch_to_hex_low.c \
	  ft_uim_to_hex_low.c \
	  ft_int_to_hex_low.c \
	  ft_lg_to_hex_low.c \
	  ft_llg_to_hex_low.c \
	  ft_sh_to_hex_low.c \
	  ft_st_to_hex_low.c \
	  ft_ch_to_hex_up.c \
	  ft_uim_to_hex_up.c \
	  ft_int_to_hex_up.c \
	  ft_lg_to_hex_up.c \
	  ft_llg_to_hex_up.c \
	  ft_sh_to_hex_up.c \
	  ft_st_to_hex_up.c \

CC = gcc
OBJ = $(SRC:.c=.o)
HEADER = ./libft/libft.a
CFLAGS = -c -Wall -Wextra -Werror
.PHONY : all clean fclean re

all : $(NAME)

%.o:%.c
	@$(CC) $(CFLAGS) -I./$(INCLUDE) -o $@ -c $<

$(NAME) : $(OBJ)
	@make -C libft
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@make -C libft clean
	@/bin/rm -rf $(OBJ)

fclean : clean
	@make -C libft fclean
	@/bin/rm -rf $(NAME)

re : fclean all

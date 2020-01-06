# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ereynier <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/08 18:19:15 by ereynier     #+#   ##    ##    #+#        #
#    Updated: 2020/01/06 12:29:12 by ereynier    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

SRCS	= 	srcs/ft_strlen.s srcs/ft_strcpy.s srcs/ft_strcmp.s srcs/ft_write.s \
			srcs/ft_read.s srcs/ft_strdup.s

OBJS	= ${SRCS:.s=.o}

INCS	= libasm.h 

NAME	= libasm.a

CFLAGS	= -Wall -Werror -Wextra

%.o: %.s	$(INCS)
		nasm -f macho64 -o $@ -s $<

$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:		
			rm -f ${OBJS} ${OBJB}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean

##
## Makefile for Makefile in /home/rajkou_p//afs/public/P2/Minishell1
## 
## Made by philippe rajkoumar
## Login   <rajkou_p@epitech.net>
## 
## Started on  Mon Nov  7 20:54:01 2011 philippe rajkoumar
## Last update Sun Dec 18 16:11:47 2011 philippe rajkoumar
##

NAME		=	asm

CC		=	cc
RM		=	rm -f

DIRMY		=	./libmy/
DIRX		=	./xfunc/
DIRI		=	./include/
DISPLAY		=	./display/
PARSING		=	./parsing/
P1		=	./parsing/directive_parse/
P2		=	./parsing/instruct_parse/
UTILS		=	./utils/
SOURCES		=	./sources/
S1		=	./sources/manage_input_file/
S2		=	./sources/manage_output/
S3		=	./sources/translate_instruct/

CFLAGS		+=	-W -Wall -ansi -pedantic 

CFLAGS		+=	-I $(DIRX) -I $(DIRMY) -I $(DIRI) 
LFLAGS		=	-L $(DIRMY) -lmy

SRC		=	$(SOURCES)op.c						\
			$(SOURCES)main.c					\
			$(SOURCES)check_usage.c					\
			$(S1)file_in_list.c					\
			$(S1)stock_file.c					\
			$(S1)nb_line_in_file.c					\
			$(S1)manage_file.c					\
			$(S1)parse_invalid_char_inline.c			\
			$(S2)manage_output.c					\
			$(S2)concat_name.c					\
			$(S2)change_extension.c					\
			$(S2)open_file.c					\
			$(S2)write_magic.c					\
			$(S2)write_header_in_file.c				\
			$(S2)write_size.c					\
			$(S2)write_comment.c					\
			$(S2)check_endian.c					\
			$(S2)write_oct_arg_tab.c				\
			$(S2)write_oct_describe.c				\
			$(S2)write_big_E.c					\
			$(S2)write_little_E.c					\
			$(S2)write_oct_instruct.c				\
			$(S2)write_instruct_in_file.c				\
			$(S3)get_values_of_arg.c				\
			$(S3)get_register_nb.c					\
			$(S3)get_direct_value.c					\
			$(S3)get_indirect_value.c				\
			$(S3)distance_between_label_and_calling.c		\
			$(S3)set_oct_describe.c					\
			$(S3)set_instruct_line.c				\
			$(S3)set_pos_begin_instruct.c				\
			$(S3)seek_label.c					\
			$(S3)check_label_name_double.c				\
			$(S3)calc_progsize.c					\
			$(S3)is_index_line.c					\
			$(S3)determine_sign.c					\
			$(P1)check_parameters_of_champ.c			\
			$(P1)check_name_of_champ.c				\
			$(P1)check_is_directive_exist.c				\
			$(P1)check_extend_of_champ.c				\
			$(P1)check_comment_of_champ.c				\
			$(P1)stock_parameters.c					\
			$(P1)stock_name_of_champ.c				\
			$(P1)stock_comment_of_champ.c				\
			$(P2)check_instruct.c					\
			$(P2)check_non_instruct_line.c				\
			$(P2)check_label.c					\
			$(P2)epur_comment_in_line.c				\
			$(P2)get_type_of_arg.c					\
			$(P2)stock_line_in_args.c				\
			$(P2)check_direct.c					\
			$(P2)check_indirect.c					\
			$(P2)check_is_args_is_on_the_correct_types.c		\
			$(P2)check_is_arg_register.c				\
			$(P2)stock_args.c					\
			$(P2)epur_arg.c						\
			$(DISPLAY)show_line_err.c				\
			$(DISPLAY)aff_assembling.c				\
			$(UTILS)stock_arg_in_tab.c				\
			$(UTILS)free_list_and_header.c

OBJ		=	$(SRC:.c=.o)

$(NAME):		$(OBJ)
			@(cd libmy/ && make re)
			@$(CC) -o $(NAME) $(OBJ) $(LFLAGS)

all:			$(NAME)

clean:		
			@$(RM) $(OBJ)

fclean:			clean	
			@$(RM) $(NAME)

re:			fclean all
/*
** instruct_parse.h for  in /u/all/rajkou_p/public/gp/masseu_f/back_up_rajkou/backup_16_12:19:40/include
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Fri Dec 16 13:38:21 2011 flavien masseube
** Last update Sun Dec 18 13:37:05 2011 philippe rajkoumar
*/

#ifndef		__INSTRUCT_PARSE_H__
# define	__INSTRUCT_PARSE_H__

# include "file_in_list.h"

/*
** check_direct.c
*/
int	check_direct_main(t_list *begin, t_list *cur, char *arg, int pos_tab);

/*
** check_indirect.c
*/
int	check_indirect(t_list *begin, t_list *current, char *arg, int pos);

/*
** check_instruct.c
*/
int	check_instruct(char *arg, int len_arg, int *oct_instruct);

/*
** check_is_arg_register.c
*/
int	check_is_arg_register(char *arg, int *type, int *tmp_type);

/*
** check_label.c
*/
int	check_label(char *line, int len_label);

/*
** check_non_instruct_line.c
*/
int	non_instruct_line_set(t_list *tmp);
int	check_non_instruct_line(t_list *list);

/*
** epur_arg.c
*/
int	epur_arg(t_list *current);
int	epur_arg_main_func(t_list *list);

/*
** epur_comment_in_line.c
*/
int	epur_comment_in_line_main_func(t_list *list);

/*
** get_type_of_arg.c
*/
int	assign_types(t_list *list);

/*
** stock_line_in_args.c
*/
int	stock_line_in_args_main_func(t_list *list);

/*
** stock_args.c
*/
int	stock_args(t_list *current, char *line);

#endif

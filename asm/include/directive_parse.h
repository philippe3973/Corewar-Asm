/*
** directive_parse.h for  in /u/all/rajkou_p/public/gp/masseu_f/back_up_rajkou/backup_16_12:19:40/include
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Fri Dec 16 13:37:59 2011 flavien masseube
** Last update Sun Dec 18 13:34:59 2011 philippe rajkoumar
*/

#ifndef		__DIRECTIVE_PARE_H__
# define	__DIRECTIVE_PARE_H__

# include "op.h"

/*
** check_comment_of_champ.c
*/
int			check_comment_of_champ(t_list *list);

/*
** check_name_of_champ.c
*/
int			check_name_of_champ(t_list *list);

/*
** check_parameters_of_champ.c
*/
int			check_paramaters_of_champ(t_list *list);

/*
** stock_comment_of_champ.c
*/
char			*get_comment_of_champ(char *line);

/*
** stock_name_of_champ.c
*/
char			*get_name_of_champ(char *line);

/*
** check_extend_of_champ.c
*/
int			check_code_of_champ(t_list *list);

/*
** check_is_directive_exist.c
*/
int			parse_directive(char *directive, int len_directive);
int			is_directive_exist(t_list *tmp);
int			check_is_directive_exist(t_list *list);

/*
** check_is_arg_is_on_the_correct_types.c
*/
header_t		*stock_parameters_main(t_list *list);

#endif

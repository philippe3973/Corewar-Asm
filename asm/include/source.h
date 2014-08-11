/*
** source.h for  in /u/all/rajkou_p/public/gp/masseu_f/back_up_rajkou/backup_16_12:19:40/include
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Fri Dec 16 13:57:44 2011 flavien masseube
** Last update Sun Dec 18 13:36:33 2011 philippe rajkoumar
*/

#ifndef		__SOURCE_H__
# define	__SOURCE_H__

# include "file_in_list.h"

/*
** check_usage.c
*/
int			check_file_extension(char *file_name);
int			check_usage(int ac, char **av);

/*
** file_in_list.c
*/
t_list			*file_in_list(char **file_in_tab);

/*
** seek_label.c
*/
int			seek_label(t_list *list, char *label_seeked, int *type);

/*
** set_instruct_line.c
*/
int			set_instruct_line(t_list *list);

/*
** set_pos_begin_instruct.c
*/
int			calc_pos_begin_instruct(t_list *current, int octets_pos);
int			set_pos_begin_instruct(t_list *list);

/*
** is_index_line.c
*/
int			is_index(t_list *current);

/*
** check_label_if_double.c
*/
int			check_label_if_double(t_list *list);

/*
** check_is_arg_on_the_correct_types.c
*/
int			check_arg_validity(t_list *list);

/*
** calc_progsize.c
*/
int			calc_progsize(t_list *list);
#endif

/*
** translate_instruct.h for  in /u/all/rajkou_p/public/gp/masseu_f/back_up_rajkou/backup_16_12:19:40/include
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Fri Dec 16 14:10:19 2011 flavien masseube
** Last update Sun Dec 18 16:01:29 2011 philippe rajkoumar
*/

#ifndef		__TRANSLATE_INSTRUCT_H__
# define	__TRANSLATE_INSTRUCT_H__

# include "file_in_list.h"

/*
** distance_between_label_and_calling.c
*/
int			distance_label(t_list *list, t_list *cur, char *name, int pos);

/*
** get_register_nb.c
*/
int			get_register_nb(char *arg, unsigned int *register_nb);

/*
** get_direct_value.c
*/
int			get_direct_value(t_list *current, int pos);

/*
**
*/
int			get_indirect_value(t_list *current, int pos);

/*
** get_values_of_arg.c
*/
int			get_values_of_arg_main_func(t_list *list);

/*
** set_oct_describe.c
*/
int			set_oct_describe(t_list *list);

/*
** determine_sign.c
*/
int			determine_sign(char *str);

#endif

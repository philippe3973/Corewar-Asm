/*
** manage_file.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_5_12:22:10/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Dec  6 10:02:25 2011 philippe rajkoumar
** Last update Sun Dec 18 13:35:57 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "asm.h"
#include "my.h"
#include "manage_input_file.h"
#include "file_in_list.h"
#include "instruct_parse.h"
#include "directive_parse.h"
#include "translate_instruct.h"
#include "op.h"
#include "source.h"
#include "utils.h"
#include "parsing.h"
#include "creat_file.h"

static int		manage_instruct(t_list *list)
{
  epur_comment_in_line_main_func(list);
  check_non_instruct_line(list);
  set_instruct_line(list);
  if (stock_line_in_args_main_func(list) == -1)
    return (INSTRUCT_ERR);
  epur_arg_main_func(list);
  if (assign_types(list) == -1)
    return (INSTRUCT_ERR);
  if (check_label_if_double(list) == -1)
    return (INSTRUCT_ERR);
  set_oct_describe(list);
  if (check_arg_validity(list) == ARG_NB_ERR)
    return (INSTRUCT_ERR);
  set_pos_begin_instruct(list);
  get_values_of_arg_main_func(list);
  return (OK);
}

static int		manage_directive(t_list *list)
{
  if (check_paramaters_of_champ(list) == DIRECTIVE_ERR)
    return (DIRECTIVE_ERR);
  else if (check_is_directive_exist(list) == DIRECTIVE_ERR)
    return (DIRECTIVE_ERR);
  return (OK);
}

int			manage_file(char *file_name)
{
  header_t		*header;
  t_list		*list;

  header = NULL;
  list = file_in_list(stock_file(file_name));
  if (manage_directive(list) == DIRECTIVE_ERR)
    {
      free_program(list, header, -1);
      return (DIRECTIVE_ERR);
    }
  if (manage_instruct(list) == INSTRUCT_ERR)
    {
      free_program(list, header, -1);
      return (INSTRUCT_ERR);
    }
  if ((header = stock_parameters_main(list)) == NULL)
    {
      free_program(list, header, 0);
      return (-1);
    }
  header->prog_size = calc_progsize(list);
  manage_output(list, header, file_name);
  free_program(list, header, 0);
  return (OK);
}

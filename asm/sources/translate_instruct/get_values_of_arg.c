/*
** convert_register_in_hexa.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_6_12:11:52/sources/translate_instruct
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Fri Dec  9 14:59:58 2011 philippe rajkoumar
** Last update Sun Dec 18 15:18:44 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include <unistd.h>
#include "asm.h"
#include "manage_input_file.h"
#include "file_in_list.h"
#include "op.h"
#include "parsing.h"
#include "my.h"
#include "translate_instruct.h"

static int	calc_label(t_list *list, t_list *current, char *name, int pos)
{
  int		tmp;

  tmp = distance_label(list, current, name, current->pos_begin_instruct);
  if (current->tmp_types[pos] == T_LAB && tmp < 0 &&
       (current->oct_instruct == 8 || current->oct_instruct == 9 ||
       current->oct_instruct == 10 || current->oct_instruct == 11))
    {
      current->oct_arg_tab[pos] = 65535u + (tmp + 1);
      return (OK);
    }
  else if (current->tmp_types[pos] == T_LAB && tmp < 0)
    {
      current->oct_arg_tab[pos] = 4294967295u + (tmp + 1);
      return (OK);
    }
  else
    current->oct_arg_tab[pos] = tmp;
  return (OK);
}

static int	get_values_of_arg(t_list *list, t_list *current)
{
  int		pos;

  pos = 0;
  while (current->arg[pos] != NULL)
    {
      if (current->tmp_types[pos] == T_IND)
	get_indirect_value(current, pos);
      else if (current->tmp_types[pos] == T_DIR)
	get_direct_value(current, pos);
      else if (current->tmp_types[pos] == 1)
	get_register_nb(current->arg[pos], &current->oct_arg_tab[pos]);
      else if (current->tmp_types[pos] == T_LAB)
	calc_label(list, current, current->arg[pos], pos);
      pos++;
    }
  return (OK);
}

int		get_values_of_arg_main_func(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line == 1 && tmp->arg != NULL)
	  get_values_of_arg(list, tmp);
      tmp = tmp->next;
    }
  return (OK);
}

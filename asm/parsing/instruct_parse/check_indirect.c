/*
** check_direct.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_14_12:16:47/parsing/instruct_parse
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Thu Dec 15 12:26:47 2011 philippe rajkoumar
** Last update Sun Dec 18 11:48:37 2011 philippe rajkoumar
*/

#include "op.h"
#include "file_in_list.h"
#include "parsing.h"
#include "asm.h"
#include "my.h"
#include "instruct_parse.h"
#include "source.h"

int		check_indirect(t_list *begin, t_list *current, char *arg, int pos)
{
  if (arg[0] == ':')
    {
      if (seek_label(begin, arg, &current->associated_types[pos]) == LABEL_ERR)
	return (-1);
      current->associated_types[pos] = T_IND;
      current->tmp_types[pos] = T_LAB;
      return (OK);
    }
  else if (my_str_isnum(arg) == -1)
    return (my_errno(INDIRECT_ERR_STR));
  current->associated_types[pos] = T_IND;
  current->tmp_types[pos] = T_IND;
  return (OK);
}

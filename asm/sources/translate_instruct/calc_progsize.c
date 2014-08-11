/*
** calc_progsize.c for asm in /home/rajkou_p//Projets/Corewar/backup_16_12_14:17/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sat Dec 17 13:12:48 2011 philippe rajkoumar
** Last update Sun Dec 18 13:09:31 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "asm.h"
#include "file_in_list.h"
#include "op.h"
#include "creat_file.h"
#include "source.h"

static int		calc_len_line(t_list *current)
{
  int			len_line;
  int			pos;

  pos = 0;
  len_line = 0;
  if (current->oct_instruct != -1)
    len_line++;
  if (current->oct_describe != -1)
    len_line++;
  while (current->associated_types[pos] != -1)
    {
      if (current->associated_types[pos] == T_REG)
        len_line++;
      else if (current->associated_types[pos] == T_DIR)
        {
          if (is_index(current) == 0)
            len_line += 2;
          else
            len_line += 4;
        }
      else if (current->associated_types[pos] == T_IND)
        len_line += 2;
      pos++;
    }
  return (len_line);
}

int			calc_progsize(t_list *list)
{
  t_list		*tmp;
  int			prog_size;
  int			len_line;
  int			index;

  index = 0;
  tmp = list;
  len_line = 0;
  while (tmp->next)
    {
      if (tmp->is_instruct_line && tmp->arg)
	{
	  prog_size = tmp->pos_begin_instruct;
	  index = tmp->index_list;
	}
      tmp = tmp->next;
    }
  tmp = list;
  while (tmp->next)
    {
      if (tmp->index_list == index)
	len_line = calc_len_line(tmp);
      tmp = tmp->next;
    }
  return (prog_size + len_line);
}

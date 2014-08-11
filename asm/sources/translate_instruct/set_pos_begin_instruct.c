/*
** set_pos_begin_instruct.c for asm in /home/rajkou_p//Projets/Corewar/backup_15_12_19:40/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Thu Dec 15 21:32:17 2011 philippe rajkoumar
** Last update Sat Dec 17 11:04:15 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "file_in_list.h"
#include "op.h"
#include "asm.h"

int			calc_pos_begin_instruct(t_list *current, int octets_pos)
{
  int			pos;

  pos = 0;
    octets_pos += 1;
  if (current->oct_describe != -1 && (current->oct_instruct != 0 &&
				      current->oct_instruct != 8 && current->oct_instruct !=
				      11 && current->oct_instruct != 15))
    octets_pos += 1;
  while (current->associated_types[pos] != -1)
    {
      if (current->associated_types[pos] == T_REG)
	octets_pos++;
      else if (current->associated_types[pos] == T_DIR)
	{
	  if (current->oct_instruct == 8 || current->oct_instruct == 9 ||
	      current->oct_instruct == 10 || current->oct_instruct == 11)
	    octets_pos += 2;
	  else
	    octets_pos += 4;
	}
      else if (current->associated_types[pos] == T_IND)
	octets_pos += 2;
      pos++;
    }
  return (octets_pos);
}

int			set_pos_begin_instruct(t_list *list)
{
  int			octets_pos;
  t_list		*tmp;
  int			begin;

  begin = 0;
  octets_pos = 0;
  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line && tmp->arg)
	{
	  if (begin == 0)
	    {
	      tmp->pos_begin_instruct = 0;
	      begin = 1;
	    }
	  else
	    tmp->pos_begin_instruct = octets_pos;
	  octets_pos = calc_pos_begin_instruct(tmp, octets_pos);
	}
      tmp = tmp->next;
    }
  return (OK);
}

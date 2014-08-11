/*
** check_non_instruct_line.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_12_12_10:30/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Dec 13 15:29:22 2011 philippe rajkoumar
** Last update Fri Dec 16 15:34:50 2011 philippe rajkoumar
*/

#include "asm.h"
#include "file_in_list.h"

int			non_instruct_line_set(t_list *tmp)
{
  int			pos;

  pos = 0;
  while (tmp->file_line[pos])
    {
      if ((tmp->file_line[pos] <= 'z' && tmp->file_line[pos] >= 'a') ||
	  (tmp->file_line[pos] <= '9' && tmp->file_line[pos] >= '0') ||
	  tmp->file_line[pos] == '%' || tmp->file_line[pos] == ':')
	return (OK);
      pos++;
    }
  return (-1);
}

int			check_non_instruct_line(t_list *list)
{
  t_list		*tmp;

  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line == 0)
	tmp = tmp->next;
      else
	{
	  if (non_instruct_line_set(tmp) == -1)
	    tmp->is_instruct_line = 0;
	  tmp = tmp->next;
	}
    }
  return (OK);
}

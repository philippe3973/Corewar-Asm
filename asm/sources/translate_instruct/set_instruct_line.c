/*
** set_instruct_line.c for asm in /home/rajkou_p//Projets/Corewar/backup_12_12_10:30/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Dec 13 18:44:49 2011 philippe rajkoumar
** Last update Fri Dec 16 15:07:42 2011 philippe rajkoumar
*/

#include "file_in_list.h"
#include "asm.h"

int			set_instruct_line(t_list *list)
{
  t_list		*tmp;

  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line == -1)
	tmp->is_instruct_line = 1;
      tmp = tmp->next;
    }
  return (OK);
}

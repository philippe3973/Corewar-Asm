/*
** distance_between_label_and_calling.c for asm in /home/rajkou_p//Projets/Corewar/backup_15_12_19:40/sources/translate_instruct
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Thu Dec 15 21:30:19 2011 philippe rajkoumar
** Last update Sun Dec 18 10:44:39 2011 philippe rajkoumar
*/

#include "file_in_list.h"
#include "my.h"

int             distance_label(t_list *list, t_list *cur, char *name, int pos)
{
  t_list        *tmp;

  tmp = cur;
  while (tmp->next)
    {
      if (tmp->is_instruct_line && tmp->label_name)
	{
	  if (my_strcmp(&name[2] , tmp->label_name) == 0)
	    return (tmp->pos_begin_instruct - pos);
	}
      tmp = tmp->next;
    }
  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line && tmp->label_name)
	{
	  if (my_strcmp(&name[2], tmp->label_name) == 0)
	    return (tmp->pos_begin_instruct - pos);
	}
      tmp = tmp->next;
    }
  return (0);
}

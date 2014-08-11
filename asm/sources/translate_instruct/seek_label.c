/*
** seek_label.c for asm in /home/rajkou_p//Projets/Corewar/backup_14_12:16:47/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Thu Dec 15 13:52:32 2011 philippe rajkoumar
** Last update Fri Dec 16 11:00:18 2011 philippe rajkoumar
*/

#include "op.h"
#include "asm.h"
#include "parsing.h"
#include "my.h"

int			seek_label(t_list *list, char *label_seeked, int *type)
{
  t_list		*tmp;

  tmp = list;
  while (tmp->next)
    {
      if (tmp->label_name)
	{
	  if (my_strcmp(&label_seeked[1], tmp->label_name) == FOUNDED)
	    {
	      *type = 8;
	      return (OK);
	    }
	}
      tmp = tmp->next;
    }
  return (my_errno(LABEL_NOT_FOUNDED));
}

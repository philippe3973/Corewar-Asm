/*
** check_label_name_double.c for corewar in /u/all/rajkou_p/public/gp/plum_s
** 
** Made by stanislas plum
** Login   <plum_s@epitech.net>
** 
** Started on  Fri Dec 16 17:09:58 2011 stanislas plum
** Last update Sun Dec 18 13:29:46 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "asm.h"
#include "file_in_list.h"
#include "parsing.h"
#include "my.h"

static int	seek_label_clones(t_list *list, char *first_label_name)
{
  t_list	*tmp;
  int		cnt_double;

  cnt_double = 0;
  tmp = list;
  while (tmp->next)
    {
      if (tmp->label_name)
	{
	  if (my_strcmp(tmp->label_name, first_label_name) == FOUNDED)
	    cnt_double++;
	}
      tmp = tmp->next;
    }
  return (cnt_double);
}

int		check_label_if_double(t_list *list)
{
  t_list	*tmp;
  int		cnt_double;

  cnt_double = 0;
  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line)
	{
	  if (tmp->label_name)
	    cnt_double = seek_label_clones(list, tmp->label_name);
	  if (cnt_double > 1)
	    return (my_errno(LABEL_ERR2));
  	}
      tmp = tmp->next;
    }
  return (OK);
}

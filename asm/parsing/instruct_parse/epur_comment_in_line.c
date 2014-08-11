/*
** stock_line_in_arg.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_12_12_10:30/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Dec 13 11:32:26 2011 philippe rajkoumar
** Last update Fri Dec 16 16:44:26 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "xfunc.h"
#include "file_in_list.h"
#include "instruct_parse.h"

static int		epur_comment_in_line(t_list *element)
{
  int			pos;
  char			*new_line;

  pos = 0;
  while (element->file_line[pos] != ';' && element->file_line[pos] !=
	 '#' && element->file_line[pos])
    pos++;
  new_line = xmalloc(sizeof(*new_line) * (pos + 1));
  pos = 0;
  while (element->file_line[pos] != ';' && element->file_line[pos] !=
	 '#' && element->file_line[pos])
    {
      new_line[pos] = element->file_line[pos];
      pos++;
    }
  new_line[pos] = '\0';
  free(element->file_line);
  element->file_line = new_line;
  return (OK);
}

int		       epur_comment_in_line_main_func(t_list *list)
{
  t_list		*tmp;

  tmp = list;
  while (tmp->next)
    {
      epur_comment_in_line(tmp);
      tmp = tmp->next;
    }
  return (OK);
}

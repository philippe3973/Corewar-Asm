/*
** check_is_directive_exist.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_12_12_10:30/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Dec 13 11:48:27 2011 philippe rajkoumar
** Last update Sun Dec 18 13:20:29 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "parsing.h"
#include "my.h"
#include "xfunc.h"

t_directive		g_tab[] =
  {
    {"name"},
    {"comment"},
    {"extend"},
    {NULL},
  };

int			parse_directive(char *directive, int len_directive)
{
  int                   pos;

  pos = 0;
  while (pos < 3)
    {
      if (my_strncmp(g_tab[pos].directive, directive, len_directive) == 0)
        return (0);
      pos++;
    }
  return (my_errno(UNKNOWN_DIRECTIVE));
}

int			is_directive_exist(t_list *tmp)
{
  int			pos;
  int			len_directive;
  int			pos_begin;

  len_directive = 0;
  pos = 0;
  while (tmp->file_line[pos] == ' ' || tmp->file_line[pos] == '\t')
    pos++;
  if (tmp->file_line[pos] != '.')
    return (0);
  pos++;
  pos_begin = pos;
  while (tmp->file_line[pos] != ' ' && tmp->file_line[pos] != '\t' &&
	 tmp->file_line[pos] && tmp->file_line[pos] != '\n')
    {
      len_directive++;
      pos++;
    }
  if ((parse_directive(&tmp->file_line[pos_begin], len_directive)) ==
      DIRECTIVE_ERR)
    return (DIRECTIVE_ERR);
  return (OK);
}

int			check_is_directive_exist(t_list *list)
{
  t_list		*tmp;

  tmp = list;
  while (tmp->next)
    {
      if (is_directive_exist(tmp) == DIRECTIVE_ERR)
	{
	  my_putstr("Line : ");
	  my_put_nbr(tmp->index_list + 1);
	  my_putchar('\n');
	  return (DIRECTIVE_ERR);
	}
      tmp = tmp->next;
    }
  return (OK);
}

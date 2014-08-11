/*
** stock_line_in_args.c for asm in /home/rajkou_p//Projets/Corewar/backup_12_12_10:30/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Dec 13 18:58:15 2011 philippe rajkoumar
** Last update Sun Dec 18 11:36:42 2011 philippe rajkoumar
*/

#include "my.h"
#include "asm.h"
#include "parsing.h"
#include "file_in_list.h"
#include "xfunc.h"
#include "instruct_parse.h"

static int		line_without_label(t_list *current, char *line, int len_arg)
{
  int			pos;

  pos = len_arg + 1;
  if (check_instruct(line, len_arg, &current->oct_instruct) == INSTRUCT_ERR)
    return (INSTRUCT_ERR);
  current->instruct = xmalloc(sizeof(*current->instruct) * (len_arg + 1));
  current->instruct = my_strncpy(current->instruct, line, len_arg);
  if (pos < my_strlen(line))
    while ((line[pos] == ' ' || line[pos] == '\t') && line[pos])
      pos++;
  else
    return (OK);
  if (stock_args(current, &line[pos]) == ARG_NB_ERR)
    return (ARG_NB_ERR);
  return (OK);
}

static int		line_with_label(t_list *current, char *line, int len_arg)
{
  int			pos;
  int			tmp;

  pos = len_arg + 1;
  if (check_label(line, len_arg) == LABEL_ERR)
    return (LABEL_ERR);
  current->label_name = xmalloc(sizeof(*current->label_name) * (len_arg + 1));
  current->label_name = my_strncpy(current->label_name, line, len_arg - 1);
  if (line[len_arg] == '\0')
    return (OK);
  while ((line[pos] == ' ' || line[pos] == '\t') && line[pos])
    pos++;
  tmp = pos;
  while ((line[pos] != ' ' && line[pos] != '\t') && line[pos])
    pos++;
  if ((line_without_label(current, &line[tmp], pos - tmp)) == INSTRUCT_ERR)
    return (INSTRUCT_ERR);
  return (OK);
}

static int		check_is_label_line(t_list *current, char *line, int len_arg)
{
  if (line[len_arg - 1] == ':')
    {
      if (line_with_label(current, line, len_arg) == LABEL_ERR)
	return (LABEL_ERR);
    }
  else if ((line_without_label(current, line, len_arg)) == INSTRUCT_ERR)
    return (INSTRUCT_ERR);
  return (OK);
}

int			check_is_label_line_main_func(t_list *tmp, char *line)
{
  int			pos_begin;
  int			len_arg;
  int			pos;

  len_arg = 0;
  pos_begin = 0;
  while (line[pos_begin] == ' ' || line[pos_begin] == '\t')
    pos_begin++;
  pos = pos_begin;
  while (line[pos] != ' ' && line[pos] != '\t' && line[pos])
    {
      pos++;
      len_arg++;
    }
  if (check_is_label_line(tmp, &line[pos_begin], len_arg) == -1)
    return (-1);
  return (OK);
}

int			stock_line_in_args_main_func(t_list *list)
{
  t_list		*tmp;

  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line == 1)
	if (check_is_label_line_main_func(tmp, tmp->file_line) == -1)
	  {
	    my_putstr("Line : ");
	    my_put_nbr(tmp->index_list + 1);
	    my_putchar('\n');
	    return (-1);
	  }
      tmp = tmp->next;
    }
  return (OK);
}

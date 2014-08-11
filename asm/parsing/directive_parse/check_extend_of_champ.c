/*
** check_extend_of_champ.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_12_12_10:30/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec 12 16:12:22 2011 philippe rajkoumar
** Last update Sun Dec 18 13:19:26 2011 philippe rajkoumar
*/

#include "asm.h"
#include "parsing.h"
#include "my.h"
#include "directive_parse.h"

static int              check_if_line_extend_exist(char *line, t_list *tmp)
{
  int                   pos;

  pos = 0;
  while (line[pos] == ' ' || line[pos] == '\t')
    pos++;
  if (my_strncmp(".extend ", &line[pos], my_strlen(".extend ")) == 0 ||
      my_strncmp(".extend\t", &line[pos], my_strlen(".extend\t")) == 0)
    {
      tmp->is_instruct_line = 0;
      return (1);
    }
  return (0);
}

int                     check_code_of_champ(t_list *list)
{
  t_list                *tmp;
  int			extend;

  extend = 0;
  tmp = list;
  while (tmp->next)
    {
      extend += check_if_line_extend_exist(tmp->file_line, tmp);
      tmp = tmp->next;
    }
  if (extend > 0)
    put_stderr(WARN_EXTEND);
  return (OK);
}

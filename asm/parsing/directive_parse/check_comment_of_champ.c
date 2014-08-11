/*
** check_name_of_champ.c for asm in /home/rajkou_p//Projets/Corewar/backup_11_12_14:43/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 11 15:43:16 2011 philippe rajkoumar
** Last update Sat Dec 17 20:42:00 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "my.h"
#include "file_in_list.h"
#include "parsing.h"
#include "asm.h"
#include "directive_parse.h"

static int		check_if_line_comment_exist(char *line, t_list *tmp)
{
  int			pos;
  int			len_cmd;

  len_cmd = 0;
  pos = 0;
  while (line[pos] == ' ' || line[pos] == '\t')
    pos++;
  if (my_strncmp(".comment ", &line[pos], my_strlen(".comment ")) == 0 ||
      my_strncmp(".comment\t", &line[pos], my_strlen(".comment\t")) == 0 ||
      my_strncmp(".comment", &line[pos], my_strlen(".comment")) == 0)
    {
      tmp->is_instruct_line = 0;
      return (1);
    }
  return (0);
}

int                     check_comment_of_champ(t_list *list)
{
  int			nb_name_founded;
  t_list                *tmp;

  nb_name_founded = 0;
  tmp = list;
  while (tmp->next)
    {
      nb_name_founded += check_if_line_comment_exist(tmp->file_line, tmp);
      tmp = tmp->next;
    }
  if (nb_name_founded == 0)
    return (my_errno(COMMENT_UNFOUNDED));
  return (OK);
}

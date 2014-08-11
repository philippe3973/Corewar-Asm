/*
** stock_parameters.c for asm in /home/rajkou_p//Projets/Corewar/backup_11_12_14:43/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 11 19:44:25 2011 philippe rajkoumar
** Last update Sun Dec 18 15:09:10 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "asm.h"
#include "parsing.h"
#include "my.h"
#include "xfunc.h"

static char		*stock_name(char *line, int len_name)
{
  char			*prog_name;

  if (len_name > 0)
    {
      prog_name = xmalloc(sizeof(*prog_name) * (len_name + 1));
      my_strncpy(prog_name, line, len_name);
      return (prog_name);
    }
  else
    {
      prog_name = xmalloc(sizeof(*prog_name) * 1);
      prog_name[0] = '\0';
      return (prog_name);
    }
  return (NULL);
}

static int		get_len_of_name(char *line, int pos)
{
  int			len_name;

  len_name = 0;
  while (line[pos] != '"' && line[pos])
    {
      len_name++;
      pos++;
    }
  if (line[pos] != '"')
    return (my_errno(NAME_NOT_ENDED));
  if (len_name > 128)
    return (my_errno(NAME_ERR_SIZE));
  return (len_name);
}

static int		analyse_name_declaration(char *line, int *pos)
{
  if (my_strncmp(".name ", &line[(*pos)], my_strlen(".name ")) == 0 ||
      my_strncmp(".name\t", &line[(*pos)], my_strlen(".name\t")) == 0 ||
      my_strncmp(".name\t", &line[(*pos)], my_strlen(".name\t")) == 0)
    {
      (*pos) += my_strlen(".name ") - 1;
      if (line[(*pos)] != '\t' && line[(*pos)] != ' ')
        return (my_errno(NAME_ERR_STR));
      while (line[(*pos)] == '\t' || line[(*pos)] == ' ')
        (*pos)++;
      if (line[(*pos)] != '"')
        return (my_errno(NAME_ERR_STR));
      (*pos)++;
      return (*pos);
    }
  return (-2);
}

char			*get_name_of_champ(char *line)
{
  int                   pos;
  int			pos_begin_name;
  int			len_name;

  len_name = 0;
  pos_begin_name = 0;
  pos = 0;
  while (line[pos] == ' ' || line[pos] == '\t')
    pos++;
  pos_begin_name = analyse_name_declaration(line, &pos);
  if (pos_begin_name == -2)
    return ("not_parameter");
  else if (pos_begin_name == -1)
    return (NULL);
  else if ((len_name = get_len_of_name(line , pos_begin_name)) == NAME_ERR)
    return (NULL);
  return (stock_name(&line[pos_begin_name], len_name));
}

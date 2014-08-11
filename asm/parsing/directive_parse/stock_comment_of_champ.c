/*
** stock_comment_of_champ.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_11_12_20:50/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec 12 09:38:25 2011 philippe rajkoumar
** Last update Sun Dec 18 15:09:02 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "asm.h"
#include "parsing.h"
#include "my.h"
#include "xfunc.h"

static char		*stock_comment(char *line, int len_comment)
{
  char			*prog_comment;

  if (len_comment > 0)
    {
      prog_comment = xmalloc(sizeof(*prog_comment) * (len_comment + 1));
      my_strncpy(prog_comment, line, len_comment);
      return (prog_comment);
    }
  else
    {
      prog_comment = xmalloc(sizeof(*prog_comment) * 1);
      prog_comment[0] = '\0';
      return (prog_comment);
    }
  return (NULL);
}

static int		get_len_of_comment(char *line, int pos)
{
  int			len_comment;

  len_comment = 0;
  while (line[pos] != '"' && line[pos])
    {
      len_comment++;
      pos++;
    }
  if (line[pos] != '"')
    return (my_errno(COMMENT_NOT_ENDED));
  if (len_comment > 2048)
    return (my_errno(COMMENT_ERR_SIZE));
  return (len_comment);
}

static int		analyse_comment_declaration(char *line, int *pos)
{
  if (my_strncmp(".comment ", &line[(*pos)], my_strlen(".comment ")) == 0 ||
      my_strncmp(".comment\t", &line[(*pos)], my_strlen(".comment\t")) == 0)
    {
      (*pos) += my_strlen(".comment ") - 1;
      if (line[(*pos)] != '\t' && line[(*pos)] != ' ')
        return (my_errno(COMMENT_ERR_STR));
      while (line[(*pos)] == '\t' || line[(*pos)] == ' ')
        (*pos)++;
      if (line[(*pos)] != '"')
        return (my_errno(COMMENT_ERR_STR));
      (*pos)++;
      return (*pos);
    }
  return (-2);
}

char			*get_comment_of_champ(char *line)
{
  int			pos;
  int			pos_begin_comment;
  int			len_comment;

  len_comment = 0;
  pos_begin_comment = 0;
  pos = 0;
  while (line[pos] == ' ' || line[pos] == '\t')
    pos++;
  pos_begin_comment = analyse_comment_declaration(line, &pos);
  if (pos_begin_comment == -2)
    return ("not_parameter");
  else if (pos_begin_comment == -1)
    return (NULL);
  else if ((len_comment = get_len_of_comment(line , pos_begin_comment)) ==
	   COMMENT_ERR)
    return (NULL);
  return (stock_comment(&line[pos_begin_comment], len_comment));
}

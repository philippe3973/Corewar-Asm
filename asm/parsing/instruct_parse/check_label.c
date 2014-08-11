/*
** check_label.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_13_12:21:18/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Wed Dec 14 14:00:57 2011 philippe rajkoumar
** Last update Thu Dec 15 18:00:49 2011 philippe rajkoumar
*/

#include "asm.h"
#include "parsing.h"
#include "file_in_list.h"
#include "my.h"

int			check_label(char *line, int len_label)
{
  int			pos;
  int			label_char;

  label_char = 0;
  pos = 0;
  while (pos < len_label)
    {
      if (!(line[pos] >= 'a' && line[pos] <= 'z') && !(line[pos] == ':') &&
	  !(line[pos] == '_') && !(line[pos] <= '9' && line[pos] >= '0'))
	return (my_errno(LABEL_NAME_ERR));
      if (line[pos] == ':')
        label_char++;
      if (label_char > 1)
        return (my_errno(LABEL_NAME_ERR));
      pos++;
    }
  return (OK);
}

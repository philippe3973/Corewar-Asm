/*
** parse_invalid_char_inline.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_6_12:11:52/sources/manage_input_file
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sat Dec 10 11:41:34 2011 philippe rajkoumar
** Last update Fri Dec 16 16:18:56 2011 philippe rajkoumar
*/

#include "my.h"
#include "asm.h"
#include "op.h"

static int		is_invalid_char_here(char c)
{
  if (c != ':' && c != '%' && (c < 'a' || c > 'z')
      && c != '_' && (c < '0' || c > '9') && c != ' ' && c != '\t'
      && c != '\n' && c != ',' && c != '+' && c != '-' && c != '.')
    {
      my_putchar(c);
      return (INVALID_CHAR);
    }
  return (OK);
}

static int		parse_invalid_char_inline(char *line)
{
  int			pos;

  pos = 0;
  while (line[pos])
    {
      if (is_invalid_char_here(line[pos]) == INVALID_CHAR)
	{
	  put_stderr(INVALID_CHAR_STR);
	  return (INVALID_CHAR);
	}
      pos++;
    }
  return (OK);
}

int			parse_invalid_char_inline_main_func(char **file_in_tab)
{
  int			index;

  index = 0;
  while (file_in_tab[index])
    {
      if (parse_invalid_char_inline(file_in_tab[index]) == INVALID_CHAR)
	return (INVALID_CHAR);
      index++;
    }
  return (OK);
}

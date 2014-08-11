/*
** stock_parameters.c for  in /home/rajkou_p//afs/public/gp/rajkou_p/backup_11_12_20:50/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec 12 07:49:25 2011 philippe rajkoumar
** Last update Sun Dec 18 15:08:37 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "file_in_list.h"
#include "parsing.h"
#include "my.h"
#include "xfunc.h"
#include "directive_parse.h"
#include "asm.h"

static int		stock_parameters(t_list *tmp, header_t *header)
{
  char			*string_tmp;

  if ((string_tmp = get_name_of_champ(tmp->file_line)) == NULL)
    {
      free(header);
      return (-1);
    }
  else if ((my_strcmp("not_parameter", string_tmp)) != 0)
    {
      my_strcpy(header->prog_name, string_tmp);
      free(string_tmp);
    }
  if ((string_tmp = get_comment_of_champ(tmp->file_line)) == NULL)
    {
      free(header);
      return (-1);
    }
  else if ((my_strcmp("not_parameter", string_tmp)) != 0)
    {
      my_strcpy(header->comment, string_tmp);
      free(string_tmp);
    }
  return (OK);
}

header_t		*stock_parameters_main(t_list *list)
{

  t_list		*tmp;
  header_t		*header;

  header = xmalloc(sizeof(*header));
  tmp = list;
  while (tmp->next)
    {
      if (stock_parameters(tmp, header) == -1)
	return (NULL);
      tmp = tmp->next;
    }
  return (header);
}

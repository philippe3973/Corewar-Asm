/*
** file_in_list.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_6_12:11:52/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Wed Dec  7 11:07:30 2011 philippe rajkoumar
** Last update Sun Dec 18 12:09:16 2011 philippe rajkoumar
*/

#include		<stdlib.h>
#include		"file_in_list.h"
#include		"manage_input_file.h"
#include		"my.h"
#include		"xfunc.h"

t_list			*file_in_list(char **file_in_tab)
{
  int			pos;
  t_list		*list;
  t_list		*element;

  pos = my_tab_len(file_in_tab) + 1;
  list = NULL;
  while (--pos >= 0)
    {
      element = xmalloc(sizeof(*list));
      element->index_list = pos;
      element->is_instruct_line = -1;
      element->oct_describe = -1;
      element->oct_instruct = -1;
      element->oct_arg_tab = NULL;
      element->tmp_types = NULL;
      element->associated_types = NULL;
      element->label_name = NULL;
      element->arg = NULL;
      element->instruct = NULL;
      element->file_line = file_in_tab[pos];
      element->next = list;
      list = element;
    }
  free(file_in_tab);
  return (list);
}

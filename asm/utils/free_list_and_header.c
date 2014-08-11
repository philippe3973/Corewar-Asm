/*
** free_list.c for utils in /home/rajkou_p//Projets/Corewar/backup_11_12_14:43/utils
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 11 17:31:30 2011 philippe rajkoumar
** Last update Sun Dec 18 12:05:02 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "file_in_list.h"
#include "utils.h"
#include "my.h"
#include "op.h"

void		free_program(t_list *list, header_t *header, int is_header_here)
{
  t_list	*tmp;

  while (list->next)
    {
      tmp = list;
      list = list->next;
      if (tmp->tmp_types && tmp->oct_arg_tab && tmp->associated_types)
	{
	  free(tmp->tmp_types);
	  free(tmp->oct_arg_tab);
	  free(tmp->associated_types);
	}
      if (tmp->arg)
	free_tab(tmp->arg);
      if (tmp->label_name)
	free(tmp->label_name);
      if (tmp->instruct)
	free(tmp->instruct);
      if (tmp->file_line)
	free(tmp->file_line);
      free(tmp);
    }
  free(list);
  if (is_header_here == 0)
    free(header);
}

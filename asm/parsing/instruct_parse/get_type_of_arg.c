/*
** check_type_of_arg.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_12_12_10:30/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec 12 17:49:39 2011 philippe rajkoumar
** Last update Sun Dec 18 13:00:52 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "asm.h"
#include "parsing.h"
#include "display.h"
#include "op.h"
#include "my.h"
#include "xfunc.h"
#include "instruct_parse.h"

static void		allocate_tabs_in_list(t_list *current)
{
  current->associated_types = xmalloc(sizeof(int) *
				      (my_tab_len(current->arg) + 1));
  current->tmp_types = xmalloc(sizeof(int) * (my_tab_len(current->arg) + 1));
  current->oct_arg_tab = xmalloc(sizeof(unsigned int) *
				 (my_tab_len(current->arg) + 1));
  current->oct_arg_tab[my_tab_len(current->arg)] = 200000000;
  current->associated_types[my_tab_len(current->arg)] = -1;
  current->tmp_types[my_tab_len(current->arg)] = -1;
}

static int		check_type_of_arg_main_func(t_list *list, t_list *current)
{
  int		pos;

  pos = -1;
  allocate_tabs_in_list(current);
  while (current->arg[++pos])
    {
      if (current->arg[pos][0] == 'r')
	{
	  if (check_is_arg_register(current->arg[pos],
				    &current->associated_types[pos],
				    &current->tmp_types[pos]) == REG_ERR)
	    return (REG_ERR);
	}
      else if (current->arg[pos][0] == '%')
	{
	  if (check_direct_main(list, current,
				     &current->arg[pos][1], pos) == -1)
	    return (-1);
	}
      else if (check_indirect(list, current,
					current->arg[pos], pos) == -1)
	return (-1);
    }
  return (OK);
}

int		assign_types(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line && tmp->arg)
	{
	  if (check_type_of_arg_main_func(list, tmp) == -1)
	    {
	      my_putstr("Line : ");
	      my_put_nbr(tmp->index_list + 1);
	      my_putstr(" -----> ");
	      show_line_err(tmp->arg);
	      my_putchar('\n');
	      return (-1);
	    }
	}
      tmp = tmp->next;
    }
  return (OK);
}

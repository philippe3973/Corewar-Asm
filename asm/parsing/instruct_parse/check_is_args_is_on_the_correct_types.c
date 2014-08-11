/*
** check_validy.c for rush in /u/all/rajkou_p/public/gp/plum_s
** 
** Made by stanislas plum
** Login   <plum_s@epitech.net>
** 
** Started on  Fri Dec  9 16:42:50 2011 stanislas plum
** Last update Sat Dec 17 11:03:23 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "file_in_list.h"
#include "op.h"
#include "parsing.h"
#include "my.h"
#include "asm.h"

static int	check_is_nb_arg_valid_with_this_instruct(t_list *current)
{
  t_list	*tmp;
  int		tab_len;

  tmp = current;
  tab_len = my_tab_len(tmp->arg);
  if (tab_len != op_tab[tmp->oct_instruct].nbr_args)
    return (my_errno(NB_ARG_ERR));
  return (OK);
}

static int	check_is_arg_is_on_the_correct_types(t_list *current)
{
  t_list        *tmp;
  int		cnt;

  cnt = 0;
  tmp = current;
  while (tmp->associated_types[cnt] != -1)
    {
      if (!(tmp->associated_types[cnt] &
	    op_tab[tmp->oct_instruct].type[cnt]))
	return (my_errno(ARG_ERR));
      cnt++;
    }
  return (OK);
}

int	       check_arg_validity(t_list *list)
{
  t_list                *tmp;

  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line && tmp->arg)
        {
	  if (check_is_nb_arg_valid_with_this_instruct(tmp) == -1)
	    {
	      my_put_nbr(tmp->index_list + 1);
	      return (ARG_NB_ERR);
	    }
	  if (check_is_arg_is_on_the_correct_types(tmp) == -1)
	    {
	      my_put_nbr(tmp->index_list + 1);
	      return (ARG_NB_ERR);
	    }
        }
      tmp = tmp->next;
    }
  return (OK);
}

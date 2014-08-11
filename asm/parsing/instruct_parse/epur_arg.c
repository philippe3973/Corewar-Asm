/*
** epur_arg.c for epur_arg in /home/rajkou_p//Projets/Corewar/backup_15_12_19:40/parsing/instruct_parse
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Fri Dec 16 11:09:11 2011 philippe rajkoumar
** Last update Fri Dec 16 15:27:51 2011 philippe rajkoumar
*/

#include "file_in_list.h"
#include "parsing.h"
#include "asm.h"
#include "my.h"

int			epur_arg(t_list *current)
{
  int			pos;

  pos = 0;
  while (current->arg[pos])
    {
      current->arg[pos] = epur_str(current->arg[pos]);
      pos++;
    }
  return (OK);
}

int			epur_arg_main_func(t_list *list)
{
  t_list		*tmp;

  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line && tmp->arg)
	epur_arg(tmp);
      tmp = tmp->next;
    }
  return (OK);
}

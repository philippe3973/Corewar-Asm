/*
** write_reg.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Tue Dec 13 09:48:27 2011 flavien masseube
** Last update Sat Dec 17 20:11:36 2011 philippe rajkoumar
*/

#include "creat_file.h"

void	write_instruct_in_file(int fd, int endian, t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line && tmp->arg)
	{
	  if (tmp->oct_instruct != -1)
	    write_oct_instruct(tmp, fd, endian);
	  if (tmp->oct_describe != -1)
	    write_oct_describe(tmp, fd, endian);
	  write_oct_arg_tab(tmp, fd, endian);
	}
      tmp = tmp->next;
    }
}


/*
** write_big_E.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Tue Dec 13 14:35:55 2011 flavien masseube
** Last update Sun Dec 18 13:10:12 2011 philippe rajkoumar
*/

#include "creat_file.h"
#include "my.h"
#include "file_in_list.h"
#include "xfunc.h"
#include "source.h"

void                            write_big_E(t_list *tmp, int fd)
{
  union Access_oct_in_var       sauv;
  int                           pos;
  int				pos_tab;

  pos_tab = 0;
  while (tmp->oct_arg_tab[pos_tab] != 200000000)
    {
      sauv.uentier = tmp->oct_arg_tab[pos_tab];
      if (tmp->associated_types[pos_tab] == T_REG)
	xwrite(fd, &sauv.car[3], 1);
      else if (tmp->associated_types[pos_tab] == T_DIR && is_index(tmp) == -1)
	{
	  pos = 0;
	  while (pos <= 3)
	    xwrite(fd, &sauv.car[pos++], 1);
	}
      else if (tmp->associated_types[pos_tab] == T_DIR ||
	       tmp->associated_types[pos_tab] == T_IND)
	{
	  pos = 2;
	  while (pos <= 3)
	    xwrite(fd, &sauv.car[pos++], 1);
	}
      pos_tab++;
    }
}

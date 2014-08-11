/*
** write_oct_instruc.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Tue Dec 13 11:29:29 2011 flavien masseube
** Last update Sat Dec 17 20:56:26 2011 philippe rajkoumar
*/

#include "file_in_list.h"
#include "creat_file.h"
#include "xfunc.h"

void				write_oct_instruct(t_list *tmp, int fd, int endian)
{
  union Access_oct_in_var	sauv;

  if (tmp->oct_instruct != -1)
    {
      sauv.entier = tmp->oct_instruct + 1;
      if (endian == 0)
	xwrite(fd, &sauv.car[0], 1);
      else if (endian == 1)
	xwrite(fd, &sauv.car[3], 1);
    }
}

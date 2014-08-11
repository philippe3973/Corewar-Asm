/*
** write_oct_describe.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Tue Dec 13 11:29:47 2011 flavien masseube
** Last update Sat Dec 17 20:55:13 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "my.h"
#include "creat_file.h"
#include "xfunc.h"

void				write_oct_describe(t_list *tmp, int fd, int endian)
{
  union Access_oct_in_var	sauv;

  if (tmp->oct_describe != -1)
    {
      sauv.entier = tmp->oct_describe;
      if (endian == 0)
	xwrite(fd, &sauv.car[0], 1);
      else if (endian == 1)
	xwrite(fd, &sauv.car[3], 1);
    }
}

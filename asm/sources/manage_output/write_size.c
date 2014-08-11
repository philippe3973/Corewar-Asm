/*
** write_size.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Mon Dec 12 10:12:46 2011 flavien masseube
** Last update Sat Dec 17 20:58:59 2011 philippe rajkoumar
*/

#include "my.h"
#include "creat_file.h"
#include "xfunc.h"

void				write_size(int fd, header_t *header, int endian)
{
  int				oct;
  union Access_oct_in_var	size;

  size.entier = header->prog_size;
  if (endian == 0)
    {
      oct = 3;
      while (oct >= 0)
	xwrite(fd, &size.car[oct--], 1);
    }
  else
    {
      oct = 0;
      while (oct < 4)
	xwrite(fd, &size.car[oct++], 1);
    }
}

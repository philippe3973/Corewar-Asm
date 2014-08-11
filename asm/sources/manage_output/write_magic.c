/*
** write_magic.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Fri Dec  9 11:21:45 2011 flavien masseube
** Last update Sat Dec 17 20:55:29 2011 philippe rajkoumar
*/

#include "creat_file.h"
#include "my.h"
#include "xfunc.h"

void				write_magic(header_t *header, int fd, int endian)
{
  union	Access_oct_in_var	test;
  int	pos;

  pos = 3;
  header->magic = COREWAR_EXEC_MAGIC;
  test.entier = header->magic;
  if (endian == 0)
    while (pos >= 0)
      {
	xwrite(fd, &test.car[pos], 1);
	pos--;
      }
  else
    {
      pos = 0;
      while (pos < 4)
	{
	  xwrite(fd, &test.car[pos], 1);
	  pos++;
	}
    }
}

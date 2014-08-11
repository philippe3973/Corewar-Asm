/*
** write_name_in_file.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Fri Dec  9 11:18:21 2011 flavien masseube
** Last update Sun Dec 18 15:09:42 2011 philippe rajkoumar
*/

#include "my.h"
#include "creat_file.h"
#include "xfunc.h"

void				write_header_in_file(int fd, header_t *header, int endian)
{
  int				cnt;
  union Access_oct_in_var	sauv;

  sauv.entier = 0;
  cnt = 132 - my_strlen(header->prog_name);
  write_magic(header, fd, endian);
  xwrite(fd, header->prog_name, my_strlen(header->prog_name));
  while (cnt > 0)
    {
      xwrite(fd, &sauv.car[0], 1);
      cnt--;
    }
  write_size(fd, header, endian);
  write_comment(header, fd);
}

/*
** write_comment.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Mon Dec 12 10:10:57 2011 flavien masseube
** Last update Sun Dec 18 11:10:06 2011 philippe rajkoumar
*/

#include "my.h"
#include "creat_file.h"
#include "xfunc.h"

void				write_comment(header_t *header, int fd)
{
  int				cnt;
  int				len;
  union Access_oct_in_var	sauv;

  sauv.entier = 0;
  if (header->comment)
    len = my_strlen(header->comment);
  else
    len = 0;
  cnt = 2052 - len;
  xwrite(fd, &header->comment, len);
  while (cnt > 0)
    {
      xwrite(fd, &sauv.car[0], 1);
      cnt--;
    }
}

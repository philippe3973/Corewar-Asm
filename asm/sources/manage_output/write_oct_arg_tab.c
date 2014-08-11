/*
** write_oct_arg_tab.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Tue Dec 13 11:30:04 2011 flavien masseube
** Last update Sat Dec 17 19:45:46 2011 philippe rajkoumar
*/

#include "creat_file.h"
#include "my.h"

void				write_oct_arg_tab(t_list *tmp, int fd, int endian)
{
  if (endian == 1)
      write_big_E(tmp, fd);
  else if (endian == 0)
    write_little_E(tmp, fd);
}

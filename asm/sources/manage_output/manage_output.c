/*
** main2.c for main2.c in /home/masseu_f//Korwar
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Mon Dec  5 10:52:09 2011 flavien masseube
** Last update Sun Dec 18 15:28:35 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include <unistd.h>
#include "creat_file.h"
#include "my.h"
#include "file_in_list.h"
#include "asm.h"
#include "xfunc.h"
#include "display.h"

int		manage_output(t_list *list, header_t *header, char *file_name)
{
  int		fd;
  int		endian;
  char		*name;

  aff_assembling(header, file_name);
  name = concat_name(file_name, ".cor");
  fd = open_file(name);
  endian = check_endian();
  write_header_in_file(fd, header, endian);
  write_instruct_in_file(fd, endian, list);
  if (close(fd) == -1)
    return (my_errno(CLOSE_ERR_STR));
  free(name);
  return (0);
}

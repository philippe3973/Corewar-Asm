/*
** aff_assembling.c for  in /u/all/rajkou_p/public/gp/masseu_f
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Sat Dec 17 12:30:27 2011 flavien masseube
** Last update Sun Dec 18 15:30:41 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "op.h"
#include "my.h"
#include "xfunc.h"

void			aff_assembling(header_t *header, char *file_name)
{
  xwrite(1, "Assembling ", 12);
  my_putstr(file_name);
  xwrite(1, ": \n", 3);
  my_putstr("           ");
  my_putstr(header->prog_name);
  xwrite(1, "\n", 1);
  my_putstr("           ");
  my_putstr(header->comment);
  xwrite(1, "\n", 1);
}

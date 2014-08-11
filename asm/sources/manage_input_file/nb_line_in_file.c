/*
** nb_line_in_file.c for  in /home/rajkou_p//afs/public/gp/rajkou_p/backup_5_12:22:10/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Dec  6 09:51:43 2011 philippe rajkoumar
** Last update Sat Dec 17 20:03:25 2011 philippe rajkoumar
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "my.h"
#include "xfunc.h"

int			nb_line_in_file(char *file_name)
{
  int			file_descriptor;
  int			len;
  char			*tmp_to_free;

  len = 0;
  file_descriptor = xopen(file_name, O_RDONLY);
  while ((tmp_to_free = get_next_line(file_descriptor)))
    {
      free(tmp_to_free);
      len++;
    }
  close(file_descriptor);
  return (len);
}

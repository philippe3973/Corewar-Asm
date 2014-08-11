/*
** xopen.c for xfunc in /home/rajkou_p//backup_5_12:15:38/xfunc
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec  5 22:00:25 2011 philippe rajkoumar
** Last update Mon Dec  5 22:04:07 2011 philippe rajkoumar
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "xfunc.h"
#include "my.h"

int			xopen(char *file_name, int flags)
{
  int			fd;

  if ((fd = open(file_name, flags)) == -1)
    {
      put_stderr(OPEN_ERR_STR);
      return (OPEN_ERR);
    }
  return (fd);
}

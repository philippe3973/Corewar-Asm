/*
** xclose.c for xfunc in /home/rajkou_p//backup_5_12:15:38/xfunc
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec  5 21:57:35 2011 philippe rajkoumar
** Last update Mon Dec  5 22:00:59 2011 philippe rajkoumar
*/

#include <unistd.h>
#include "my.h"
#include "xfunc.h"

int			xclose(int fd)
{
  if (close(fd) == -1)
    {
      put_stderr(CLOSE_ERR_STR);
      return (CLOSE_ERR);
    }
  return (OK);
}

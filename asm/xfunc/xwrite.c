/*
** xwrite.c for xfunc in /home/rajkou_p//my_ls/xfunc
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Fri Nov  4 11:45:28 2011 philippe rajkoumar
** Last update Fri Nov  4 13:09:31 2011 philippe rajkoumar
*/

#include	<stdlib.h>
#include	"xfunc.h"

int		xwrite(int fd, const void *buff, int len)
{
  int		ret;

  ret = 0;
  if ((ret = write(fd, buff, len)) == -1)
    {
      put_stderr("\nError: Write is impossible\n");
      exit(EXIT_FAILURE);
    }
  return (ret);
}

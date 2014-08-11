/*
** xread.c for my_sh in /home/rajkou_p//afs/public/P2/Minishell1/xfunc
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Nov  8 11:31:21 2011 philippe rajkoumar
** Last update Tue Nov  8 11:32:23 2011 philippe rajkoumar
*/

#include		<stdlib.h>
#include		<unistd.h>
#include		"my.h"

int			xread(int fd, void *buff, int ct)
{
  int			ret;

  if ((ret = read(fd, buff, ct)) == -1)
    {
      put_stderr("\nerror: impossible reading.\n");
      exit(EXIT_FAILURE);
    }
  return		(ret);
}

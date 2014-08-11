/*
** check_usage.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_5_12:15:38/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec  5 16:11:31 2011 philippe rajkoumar
** Last update Sun Dec 18 14:01:50 2011 philippe rajkoumar
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"
#include "xfunc.h"
#include "asm.h"

static int		check_file_extension(char *file_name)
{
  int			pos;

  pos = my_strlen(file_name) - 1;
  if (my_strcmp(".cor", &file_name[pos - 3]) == 0)
    return (my_errno(FILE_ERR));
  if (file_name[pos] == 's' && file_name[pos - 1] && file_name[pos - 1] == '.')
    return (OK);
  put_stderr(EXTENSION_ERR);
  return (USAGE_ERR);
}

int			check_usage(int ac, char **av)
{
  int			file_descriptor;

  if (ac != 2)
    return (my_errno(USAGE));
  if ((file_descriptor = open(av[1], O_RDONLY)) == -1)
    {
      put_stderr("File ");
      put_stderr(av[1]);
      put_stderr(" not accessible\n");
      return (USAGE_ERR);
    }
  else
    if (close(file_descriptor) == -1)
      return (my_errno(CLOSE_ERR_STR));
  if (check_file_extension(av[1]) == USAGE_ERR)
    return (USAGE_ERR);
  return (OK);
}

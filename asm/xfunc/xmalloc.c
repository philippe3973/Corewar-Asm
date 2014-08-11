/*
** xmalloc.c for xfunc in /home/rajkou_p//Projets/my_ls/xfunc
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Fri Nov  4 12:51:26 2011 philippe rajkoumar
** Last update Fri Dec 16 17:56:11 2011 philippe rajkoumar
*/

#include		<stdlib.h>
#include		"xfunc.h"

void			*xmalloc(int len)
{
  void			*tab;

  if ((tab = malloc(len)) == NULL)
    {
      put_stderr("\nMemory allocate error\n");
      exit(EXIT_FAILURE);
    }
  return (tab);
}

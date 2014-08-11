/*
** my_strdup.c for libmy in /home/rajkou_p//Projets/my_ls/libmy
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Fri Nov  4 12:59:13 2011 philippe rajkoumar
** Last update Sat Dec  3 18:08:31 2011 philippe rajkoumar
*/

#include		<stdlib.h>
#include		"my.h"
#include		"xfunc.h"

char			*my_strdup(char *str)
{
  char			*dest;

  dest = xmalloc((my_strlen(str) + 1) * sizeof(*dest));
  if (dest == NULL)
    return (NULL);
  my_strcpy(dest, str);
  return (dest);
}

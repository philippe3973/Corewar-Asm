/*
** my_strcat.c for lib in /home/rajkou_p//backup_04.11.19:52/my_ls/libmy
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sat Nov  5 14:15:28 2011 philippe rajkoumar
** Last update Sun Nov  6 13:57:10 2011 philippe rajkoumar
*/

#include		"my.h"

void			my_strcat(char *dest, char *src)
{
  int			i;
  int			j;

  i = 0;
  j = my_strlen(dest);
  while (src && src[i])
    dest[i + j] = src[i++];
  dest[i + j] = '\0';
}

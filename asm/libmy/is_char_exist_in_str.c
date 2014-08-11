/*
** is_char_exist_in_str.c for libmy in /home/rajkou_p//afs/public/gp/rajkou_p/backup_12_12_10:30/libmy
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec 12 18:00:21 2011 philippe rajkoumar
** Last update Mon Dec 12 18:01:20 2011 philippe rajkoumar
*/

#include "my.h"

int			is_char_exist_in_str(char *str, char c)
{
  int			pos;

  pos = 0;
  while (str[pos])
    {
      if (str[pos] == c)
	return (0);
      pos++;
    }
  return (-1);
}

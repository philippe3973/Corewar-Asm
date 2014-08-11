/*
** my_tab_len.c for libmy in /home/rajkou_p//afs/public/p8/backup_2_12:9:47/backup_13_11:18:44/Minishell1/libmy
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Fri Dec  2 10:12:49 2011 philippe rajkoumar
** Last update Sun Dec  4 17:03:45 2011 philippe rajkoumar
*/

#include "my.h"

int			my_tab_len(char **tab)
{
  int			len;

  len = 0;
  while (tab[len])
    len++;
  return (len);
}

/*
** delete_line_in_tab.c for libmy in /home/rajkou_p//afs/public/gp/rajkou_p/backup_6_12:11:52/libmy
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 11 14:14:48 2011 philippe rajkoumar
** Last update Sun Dec 18 12:00:30 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "my.h"
#include "xfunc.h"

char			**delete_line_in_tab(char **tab, int pos)
{
  char			**new_tab;
  int			index;

  index = 0;
  new_tab = xmalloc(sizeof(*tab) * my_tab_len(tab));
  return (new_tab);
}

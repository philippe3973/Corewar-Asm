/*
** free_tab.c for libmy in /home/rajkou_p//Projets/my_ls/libmy
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Fri Nov  4 13:18:02 2011 philippe rajkoumar
** Last update Fri Nov  4 17:30:03 2011 philippe rajkoumar
*/

#include		<stdlib.h>
#include		"my.h"

void			free_tab(char **tab)
{
  int			index;

  index = 0;
  while (tab[index])
    {
      free(tab[index]);
      index++;
    }
  free(tab);
}

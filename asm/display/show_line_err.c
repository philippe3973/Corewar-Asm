/*
** show_to_wordtab.c for corewar in /u/all/rajkou_p/public/gp/plum_s
** 
** Made by stanislas plum
** Login   <plum_s@epitech.net>
** 
** Started on  Fri Dec 16 18:07:49 2011 stanislas plum
** Last update Fri Dec 16 20:08:25 2011 philippe rajkoumar
*/

#include "display.h"
#include "my.h"

void			show_line_err(char **tab)
{
  int			cnt;

  cnt = 0;
  while (tab[cnt])
    {
      my_putstr(tab[cnt]);
      if (tab[cnt + 1] != '\0')
	my_putchar(' ');
      cnt++;
    }
  my_putchar('\n');
}

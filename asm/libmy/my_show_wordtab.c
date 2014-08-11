/*
** my_show_wordtab.c for my_show_wordtab in /home/rajkou_p/
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Thu Oct 13 21:34:45 2011 philippe rajkoumar
** Last update Thu Dec 15 12:40:23 2011 philippe rajkoumar
*/

int		my_show_wordtab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
  return (0);
}

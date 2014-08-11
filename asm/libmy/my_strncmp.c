/*
** my_strncmp.c for my_strncmp in /home/rajkou_p//afs/rendu/piscine/Jour_06/ex_06
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Oct 10 22:17:33 2011 philippe rajkoumar
** Last update Mon Oct 10 22:23:25 2011 philippe rajkoumar
*/

int		my_strncmp(char *s1, char *s2, int n)
{
  int		i;

  i = 0;
  while (i < n)
    {
      if (s1[i] != s2[i])
        return (s1[i] - s2[i]);
      i++;
    }
  return (0);
}

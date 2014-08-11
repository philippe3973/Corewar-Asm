/*
** my_strcmp.c for my_strcmp in /home/rajkou_p//afs/rendu/piscine/Jour_06/ex_05
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Oct 11 13:57:16 2011 philippe rajkoumar
** Last update Tue Oct 11 13:57:20 2011 philippe rajkoumar
*/

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] || s2[i])
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i++;
    }
  return (0);
}

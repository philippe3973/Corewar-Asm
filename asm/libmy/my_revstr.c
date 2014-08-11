/*
** my_revstr.c for my_revstr in /home/rajkou_p//afs/rendu/piscine/Jour_06/ex_03
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Oct 10 10:51:27 2011 philippe rajkoumar
** Last update Mon Oct 10 22:24:12 2011 philippe rajkoumar
*/

char		*my_revstr(char *str)
{
  int		a;
  int		b;
  char		temp;

  a = 0;
  b = 0;
  while (str[b])
    b++;
  b = b - 1;
   while (a < b)
    {
      temp = str[a];
      str[a] = str[b];
      str[b] = temp;
      a++;
      b--;
    }
  return (str);
}

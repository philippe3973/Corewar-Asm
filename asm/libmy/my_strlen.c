/*
** my_strlen.c for my_strlen in /home/rajkou_p//afs/rendu/piscine/Jour_04/ex_03
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Thu Oct  6 09:54:18 2011 philippe rajkoumar
** Last update Fri Nov  4 12:54:34 2011 philippe rajkoumar
*/

int		my_strlen(const char *str)
{
  int		nb;

  nb = 0;
  while (str[nb])
      nb++;
  return (nb);
}

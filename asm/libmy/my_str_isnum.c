/*
** my_str_isnum.c for my_str_isnum in /home/rajkou_p//afs/rendu/piscine/Jour_06/ex_11
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Oct 11 09:44:21 2011 philippe rajkoumar
** Last update Thu Dec 15 15:44:32 2011 philippe rajkoumar
*/

int		my_str_isnum(char *str)
{
  int		i;

  i = 0;
  while (str[i] == '-' || str[i] == '+')
    i++;
  while (str[i] && (str[i] != ' ' && str[i] != '\t'))
    {
      if (str[i] < '0' || str[i] > '9')
	return (-1);
      i++;
    }
  return (1);
}

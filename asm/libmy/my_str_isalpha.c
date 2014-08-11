/*
** my_str_isalpha.c for my_str_isalpha in /home/rajkou_p//afs/rendu/piscine/Jour_06/ex_10
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Oct 10 23:16:19 2011 philippe rajkoumar
** Last update Tue Oct 11 09:41:49 2011 philippe rajkoumar
*/

int		my_str_isalpha(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 65 || str[i] > 90  && str[i] < 97 || str[i] > 122)
	return (0);
      i++;
    }
  return (1);
}

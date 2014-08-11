/*
** my_getnbr.c for my_get_nbr in /home/rajkou_p//test
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Thu Oct  6 14:04:48 2011 philippe rajkoumar
** Last update Fri Oct 14 10:23:04 2011 philippe rajkoumar
*/

int             my_getnbr(char *str)
{
  int           i;
  int           nb;
  int           signe;

  nb = 0;
  i = 0;
  signe = 1;
  while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
    {
      if (str[i] == '-')
        signe *= -1;
      i++;
    }
  str += i;
  i = 0;
  while (str[i] != '\0' && (str[i] <= '9' && str[i] >= '0'))
    {
      nb *= 10;
      nb += str[i] - '0';
      i++;
    }
  return (signe * nb);
}

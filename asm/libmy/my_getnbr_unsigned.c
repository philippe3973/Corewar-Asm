/*
** get_nbr.c for getnbr in /home/plum_s/
** 
** Made by stanislas plum
** Login   <plum_s@epitech.net>
** 
** Started on  Thu Oct  6 14:17:38 2011 stanislas plum
** Last update Sun Dec 18 16:13:09 2011 philippe rajkoumar
*/

#include		"my.h"

unsigned int		my_getnbr_unsigned(char *str)
{
  unsigned int		result;

  result = 0;
  while (*str != '\0' && (*str == '-' || *str == '+'))
    str++;
  while ((*str >= '0') && (*str <= '9'))
    {
      result = (result * 10) + ((*str) - '0');
      str++;
    }
  return (result);
}

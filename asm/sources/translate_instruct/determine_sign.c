/*
** determine_sign.c for  in /u/all/rajkou_p/public/gp/masseu_f
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Sun Dec 18 15:51:35 2011 flavien masseube
** Last update Sun Dec 18 16:12:40 2011 philippe rajkoumar
*/

#include "translate_instruct.h"

int		determine_sign(char *str)
{
  int	pos;
  int	nb;

  pos = 0;
  nb = 0;
  while (str[pos])
    {
      if (str[pos] == '-')
	nb++;
      pos++;
    }
  if (nb % 2 == 0)
    return (0);
  return (-1);
}

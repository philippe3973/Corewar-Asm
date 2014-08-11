/*
** my_isneg.c for my_isneg in /home/rajkou_p//test/Jour_03
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Oct  4 16:55:06 2011 philippe rajkoumar
** Last update Fri Nov  4 11:40:32 2011 philippe rajkoumar
*/

#include	"my.h"

int		my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  return (0);
}

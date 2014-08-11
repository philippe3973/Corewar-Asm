/*
** my_put_nbr.c for my_putnbr in /home/rajkou_p//test/Jour_03
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Wed Oct  5 10:56:59 2011 philippe rajkoumar
** Last update Thu Nov  3 10:33:04 2011 philippe rajkoumar
*/

#include	"my.h"

void		my_put_nbr(int nb)
{
  if (nb < 0)
    my_putchar('-');
  else
    nb = -nb;
  if (nb < -9)
    my_put_nbr( - (nb / 10));
  my_putchar('0' + -(nb % 10));
}

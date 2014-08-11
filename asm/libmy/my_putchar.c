/*
** my_putchar.c for my_putchar in /home/rajkou_p//test/Jour_07/lib/my
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Wed Oct 12 11:24:44 2011 philippe rajkoumar
** Last update Fri Nov  4 15:31:59 2011 philippe rajkoumar
*/

#include	"my.h"

void		my_putchar(char c)
{
  xwrite(1, &c, 1);
}

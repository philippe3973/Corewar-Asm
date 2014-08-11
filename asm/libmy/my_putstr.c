/*
** my_putstr.c for my_putstr in /home/rajkou_p//afs/rendu/piscine/Jour_04/ex_02
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Thu Oct  6 09:49:55 2011 philippe rajkoumar
** Last update Sun Dec 18 15:27:01 2011 philippe rajkoumar
*/

#include	"xfunc.h"

void		my_putstr(char *str)
{
  xwrite(1, str, my_strlen(str));
}

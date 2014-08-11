/*
** put_stderr.c for lib in /home/rajkou_p//Projets/my_ls/libmy
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Fri Nov  4 12:44:38 2011 philippe rajkoumar
** Last update Fri Nov  4 13:20:37 2011 philippe rajkoumar
*/

#include		<stdlib.h>
#include		"my.h"

int			put_stderr(const char *string_error)
{
  xwrite(2, string_error, my_strlen(string_error));
  return (EXIT_FAILURE);
}


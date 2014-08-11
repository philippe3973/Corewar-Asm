/*
** main.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_5_12:15:38/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec  5 15:57:54 2011 philippe rajkoumar
** Last update Tue Dec  6 11:51:07 2011 philippe rajkoumar
*/

#include		"asm.h"
#include		"manage_input_file.h"

int			main(int ac, char **av)
{
  if (check_usage(ac, av) == USAGE_ERR)
    return (0);
  if (manage_file(av[1]) == -1)
    return (0);
  return (0);
}

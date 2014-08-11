/*
** check_endian.c for  in /u/all/rajkou_p/public/gp/masseu_f/backup_12_12_15:10/Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Mon Dec 12 18:00:32 2011 flavien masseube
** Last update Sat Dec 17 20:10:14 2011 philippe rajkoumar
*/

#include "creat_file.h"

int	check_endian()
{
  int	i;

  i = 1;
  if (*(char *)&i == 1)
    return (0);
  else
    return (1);
}

/*
** xopen.c for  in /home/masseu_f//Korwar
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Mon Dec  5 11:58:43 2011 flavien masseube
** Last update Sun Dec 18 13:06:20 2011 philippe rajkoumar
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include "creat_file.h"
#include "my.h"
#include "xfunc.h"

int	open_file(char *str)
{
  int	fd;

  if ((fd = open(str, O_CREAT | O_RDWR,
		 S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) == -1)
    {
      xwrite(1, "OPEN FAIL\n", my_strlen("OPEN FAIL\n"));
      exit(EXIT_FAILURE);
    }
  return (fd);
}

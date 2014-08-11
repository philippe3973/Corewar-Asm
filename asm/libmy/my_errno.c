/*
** my_errno.c for liby in /home/rajkou_p//Projets/Corewar/backup_11_12_14:43/libmy
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 11 20:41:47 2011 philippe rajkoumar
** Last update Sun Dec 11 20:44:10 2011 philippe rajkoumar
*/

#include "my.h"
#include "asm.h"
#include "utils.h"

int		my_errno(char *error_str)
{
  put_stderr(error_str);
  return (-1);
}

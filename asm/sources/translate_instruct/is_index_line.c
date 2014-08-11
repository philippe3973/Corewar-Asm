/*
** is_index_line.c for asm in /home/rajkou_p//Projets/Corewar/backup_final/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 18 11:00:31 2011 philippe rajkoumar
** Last update Sun Dec 18 11:09:10 2011 philippe rajkoumar
*/

#include "asm.h"
#include "file_in_list.h"

int			is_index(t_list *current)
{
  if (current->oct_instruct == 8 || current->oct_instruct == 9 ||
      current->oct_instruct == 10 || current->oct_instruct == 11)
    return (0);
  return (-1);
}

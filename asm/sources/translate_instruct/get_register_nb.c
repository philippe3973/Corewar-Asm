/*
** get_register_nb.c for asm in /home/rajkou_p//Projets/Corewar/backup_final/sources/translate_instruct
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 18 10:29:40 2011 philippe rajkoumar
** Last update Sun Dec 18 10:40:13 2011 philippe rajkoumar
*/

#include "asm.h"
#include "file_in_list.h"
#include "op.h"
#include "parsing.h"
#include "my.h"

int			get_register_nb(char *instruct_argument, int *register_nb)
{
  *register_nb = my_getnbr(&instruct_argument[1]);
  return (OK);
}

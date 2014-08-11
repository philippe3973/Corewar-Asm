/*
** get_indirect_value.c for asm in /home/rajkou_p//Projets/Corewar/backup_final/sources/translate_instruct
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 18 10:41:39 2011 philippe rajkoumar
** Last update Sun Dec 18 10:42:02 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "asm.h"
#include "manage_input_file.h"
#include "file_in_list.h"
#include "op.h"
#include "parsing.h"
#include "my.h"

int			get_indirect_value(t_list *current, int pos)
{
  int			tmp;

  if (my_getnbr(current->arg[pos]) > 512 ||
      (my_getnbr(current->arg[pos]) < - 512))
    return (my_errno(INDIRECT_ERR));
  else
    {
      tmp = my_getnbr(current->arg[pos]);
      if (current->tmp_types[pos] == T_IND && tmp < 0)
        {
          current->oct_arg_tab[pos] = 65535 + (tmp + 1);
          return (OK);
        }
      return (OK);
    }
}

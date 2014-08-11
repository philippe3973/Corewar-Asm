/*
** get_direct_nb.c for asm in /home/rajkou_p//Projets/Corewar/backup_final/sources/translate_instruct
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 18 10:38:25 2011 philippe rajkoumar
** Last update Sun Dec 18 16:16:11 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "asm.h"
#include "manage_input_file.h"
#include "file_in_list.h"
#include "op.h"
#include "parsing.h"
#include "my.h"
#include "translate_instruct.h"

int			get_direct_value(t_list *current, int pos)
{
  int			tmp;

  if (determine_sign(&current->arg[pos][1]) == -1)
      tmp = my_getnbr(&current->arg[pos][1]);
  else
    tmp = my_getnbr_unsigned(&current->arg[pos][1]);
if (current->tmp_types[pos] == T_DIR && tmp < 0 &&
      (current->oct_instruct == 8 || current->oct_instruct == 9 ||
       current->oct_instruct == 10 || current->oct_instruct == 11))
    {
      current->oct_arg_tab[pos] = 65535u + (tmp + 1);
      return (OK);
    }
  else if (current->tmp_types[pos] == T_DIR && tmp < 0)
    {
      current->oct_arg_tab[pos] = 4294967295u + (tmp + 1);
      return (OK);
    }
  else
    current->oct_arg_tab[pos] = tmp;
  return (OK);
}

/*
** check_is_arg_register.c for asm in /home/rajkou_p//Projets/Corewar/backup_final/parsing/instruct_parse
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 18 11:30:56 2011 philippe rajkoumar
** Last update Sun Dec 18 11:31:09 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "asm.h"
#include "parsing.h"
#include "display.h"
#include "op.h"
#include "my.h"
#include "xfunc.h"
#include "instruct_parse.h"

int			check_is_arg_register(char *arg, int *type, int *tmp_type)
{
  if (is_char_exist_in_str(arg, LABEL_CHAR) == 0 ||
      is_char_exist_in_str(arg, DIRECT_CHAR) == 0)
    return (OK);
  if (arg[0] == 'r')
    {
      if (my_str_isnum(&arg[1]) == 1)
        {
          if (my_getnbr(&arg[1]) < 16)
            {
              *type = 1;
              *tmp_type = 1;
            }
          else
            return (my_errno(REG_ERR_STR));
        }
      else
        return (my_errno(REG_ERR_STR));
    }
  return (OK);
}

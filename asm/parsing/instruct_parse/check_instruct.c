/*
** check_instruct.c for asm in /home/rajkou_p//Projets/Corewar/backup_12_12_10:30/parsing
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Dec 13 20:41:12 2011 philippe rajkoumar
** Last update Sat Dec 17 14:09:15 2011 philippe rajkoumar
*/

#include "file_in_list.h"
#include "asm.h"
#include "parsing.h"
#include "op.h"
#include "my.h"

int			check_instruct(char *arg, int len_arg, int *oct_instruct)
{
  int			pos;

  pos = 0;
  while (pos < 16)
    {
      if ((my_strncmp(op_tab[pos].mnemonique, arg, len_arg)) == 0)
	{
	  *oct_instruct = pos;
	  return (OK);
	}
      pos++;
    }
  return (my_errno(INSTRUCT_NAME_ERR));
}

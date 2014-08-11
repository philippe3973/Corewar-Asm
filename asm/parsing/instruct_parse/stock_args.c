/*
** stock_args.c for asm in /home/rajkou_p//Projets/Corewar/backup_final/parsing/instruct_parse
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 18 11:34:23 2011 philippe rajkoumar
** Last update Sun Dec 18 13:38:25 2011 philippe rajkoumar
*/

#include "my.h"
#include "asm.h"
#include "parsing.h"
#include "file_in_list.h"
#include "xfunc.h"
#include "instruct_parse.h"
#include "utils.h"

int			stock_args(t_list *current, char *line)
{
  current->arg = stock_arg_in_tab(line);
  if (my_tab_len(current->arg) > 3)
    return (my_errno(ARG_ERR_STR));
  return (OK);
}

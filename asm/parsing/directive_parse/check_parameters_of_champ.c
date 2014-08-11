/*
** check_paramaters_of_champ.c for asm in /home/rajkou_p//Projets/Corewar/backup_11_12_14:43/sources/manage_input_file
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 11 15:32:44 2011 philippe rajkoumar
** Last update Fri Dec 16 15:23:43 2011 philippe rajkoumar
*/

#include "asm.h"
#include "parsing.h"
#include "file_in_list.h"
#include "directive_parse.h"

int			check_paramaters_of_champ(t_list *list)
{
  if (check_name_of_champ(list) == NAME_ERR)
    return (PARAMETER_ERR);
  else if (check_comment_of_champ(list) == COMMENT_ERR)
    return (PARAMETER_ERR);
  else if (check_code_of_champ(list) == EXTEND_ERR)
    return (PARAMETER_ERR);
  return (OK);
}

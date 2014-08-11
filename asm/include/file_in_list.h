/*
** file_in_list.h for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_6_12:11:52/include
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Wed Dec  7 11:01:30 2011 philippe rajkoumar
** Last update Sat Dec 17 00:07:11 2011 philippe rajkoumar
*/

#ifndef			FILE_IN_LIST_H_
# define		FILE_IN_LIST_H_

typedef struct s_list t_list;

struct s_list
{
  int			is_instruct_line;

  char			*file_line;

  char			*label_name;
  char			*instruct;
  char			**arg;

  int			pos_begin_instruct;

  int			oct_instruct;
  int			oct_describe;
  unsigned int		*oct_arg_tab;

  int			*associated_types;
  int			*tmp_types;

  int			index_list;

  t_list		*next;
};

#endif			/* !FILE_IN_LIST_H_ */

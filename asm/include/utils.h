/*
** utils.h for asm in /home/rajkou_p//Projets/Corewar/backup_11_12_14:43/include
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 11 17:34:27 2011 philippe rajkoumar
** Last update Sun Dec 18 12:07:46 2011 philippe rajkoumar
*/

#ifndef		UTILS_H_
# define	UTILS_H_

# include "file_in_list.h"
# include "op.h"

/*
** free_list_and_header.c
*/
void		free_program(t_list *list, header_t *header, int is_header_here);

/*
** show_list.c
*/
void		show_list(t_list *list);
void		aff_types(int *associated_types, int len);
void		show_list(t_list *list);

/*
** stock_arg_in_tab.c
*/
char		**stock_arg_in_tab(char *str);

#endif		/* !UTILS_H_ */

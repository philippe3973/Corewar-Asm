/*
** manage_input_file.h for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_5_12:22:10/include
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Dec  6 11:33:57 2011 philippe rajkoumar
** Last update Tue Dec  6 11:48:38 2011 philippe rajkoumar
*/

#ifndef			MANAGE_INPUT_FILE_H_
# define		MANAGE_INPUT_FILE_H_

/*
** manage_file.c
*/
int			manage_file(char *file_name);

/*
** count_nb_line_empty.c
*/
int			count_nb_line_empty(char **file_in_tab);

/*
** stock_file.c
*/
char			*stock_buffer_in_str(char *buffer, int *pos, int *byte);
char			*get_next_line(int fd);
char			**stock_file(char *file_name);

/*
** epur_stocked_file.c
*/
char			*epur_file_line(char *line);
char			**epur_stocked_file(char **file_in_tab);

/*
** epur_line_empty.c
*/
char			**epur_lines_empty(char **file_in_tab);

/*
** nb_line_in_file.c
*/
int			nb_line_in_file(char *file_name);

#endif		/* !MANAGE_INPUT_FILE_H_*/

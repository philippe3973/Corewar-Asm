/*
** creat_file.h for  in /home/masseu_f//Korwar/creat_file
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Mon Dec  5 12:00:16 2011 flavien masseube
** Last update Sun Dec 18 13:08:42 2011 philippe rajkoumar
*/

#ifndef		__CREAT_FILE_H__
# define	__CREAT_FILE_H__

# include "file_in_list.h"
# include "op.h"

/*
** manage_output.c
*/
int		manage_output(t_list *list, header_t *header, char *name);

/*
** change_extension.c
*/
char		*change_extension(char *dest, char *src);

/*
** check_endian.c
*/
int		check_endian();

/*
** concat_name.c
*/
char		*concat_name(char *str, char *ext);

/*
** write_big_E.c
*/
void		write_big_E(t_list *tmp, int fd);

/*
** write_comment.c
*/
void		write_comment(header_t *header, int fd);

/*
** write_header_in_file.c
*/
void		write_header_in_file(int fd, header_t *header, int endian);

/*
** write_little_E.c
*/
void		write_little_E(t_list *tmp, int fd);

/*
** write_magic.c
*/
void		 write_magic(header_t *header, int fd, int endian);

/*
** write_oct_arg_tab.c
*/
void		write_oct_arg_tab(t_list *tmp, int fd, int endian);

/*
** write_oct_describe.c
*/
void		write_oct_describe(t_list *tmp, int fd, int endian);

/*
** write_oct_in_file.c
*/
void		write_oct_in_file(unsigned int oct, int fd);

/*
** write_oct_instruc.c
*/
void		write_oct_instruct(t_list *tmp, int fd, int endian);

/*
** write_reg.c
*/
void		write_instruct_in_file(int fd, int endian, t_list *list);

/*
** write_size.c
*/
void		write_size(int fd, header_t *header, int endian);

/*
** open_file.c
*/
int		open_file(char *str);

union Access_oct_in_var
{
  unsigned int	uentier;
  int		entier;
  unsigned char car[4];
};

#endif /*__CREAT_FILE_H__*/

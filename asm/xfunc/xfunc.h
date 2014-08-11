/*
** xfunc.h for xfunc in /home/rajkou_p//my_ls/xfunc
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Fri Nov  4 11:43:42 2011 philippe rajkoumar
** Last update Mon Dec  5 22:05:46 2011 philippe rajkoumar
*/

#ifndef		XFUNC_H_
# define	XFUNC_H_

# define	CLOSE_ERR		-1
# define	CLOSE_ERR_STR		"Close error\n"

# define	OPEN_ERR		-1
# define	OPEN_ERR_STR		"Open error\n"

# define	OK			0
int		xwrite(int, const void *, int);
void		*xmalloc(int);
int		xread(int fd, char *buff, int ct);
int		xclose(int fd);
int		xopen(char *file_name, int flags);

#endif		/* !XFUNC */

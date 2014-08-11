/*
** get_next_line.h for gnl in /home/rajkou_p//Projets/gnl
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Tue Nov 29 11:47:58 2011 philippe rajkoumar
** Last update Fri Dec 16 16:23:45 2011 philippe rajkoumar
*/

#ifndef				GET_NEXT_LINE_H_
# define			GET_NEXT_LINE_H_

# define			BUFFER_SIZE		4096
# define			LINE_SIZE		4096

# define			MALLOC_ERR		-1
# define			WRITE_ERR		-1
# define			READ_ERR		-1

# define			MALLOC_ERR_STR		"Malloc error\n"
# define			READ_ERR_STR		"Read error\n"

# define			FAILURE			-1

/*
** get_next_line.c
*/

char				*get_next_line(const int fd);
#endif				/* !GET_NEXT_LINE_H_ */

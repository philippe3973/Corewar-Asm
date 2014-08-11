/*
** asm.h for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_5_12:15:38/include
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec  5 15:59:12 2011 philippe rajkoumar
** Last update Sun Dec 18 14:02:06 2011 philippe rajkoumar
*/

#ifndef			ASM_H_
# define		ASM_H_

# define		USAGE			"./asm file_name[.s]\n"
# define		EXTENSION_ERR		"File is not in the form file_name[.s]\n"

# define		MALLOC_ERR		"Can't perform malloc\n"
# define		SYNTAX_ERR_STR		"Syntax error line"
# define		INVALID_CHAR_STR	"Invalid char founded\n"
# define		INDIRECT_ERR		"Warning Indirection line"
# define		DIRECT_ERR		"Warning Direct too big"
# define		FILE_ERR		"File.s ==> ./asm File.s ==> File.cor\n"
# define		USAGE_ERR		-1
# define		SYNTAX_ERR		-1
# define		INVALID_CHAR		-1
# define		OK			0

# define		T_LAB2			2
# define		T_LAB4			4
/*
** check_usage.c
*/
int			check_usage(int ac, char **av);

#endif			/* !ASM_H_ */

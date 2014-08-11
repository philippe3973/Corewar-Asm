/*
** parsing.h for asm in /home/rajkou_p//Projets/Corewar/backup_11_12_14:43/include
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Sun Dec 11 15:51:16 2011 philippe rajkoumar
** Last update Sun Dec 18 14:24:19 2011 philippe rajkoumar
*/

#include "file_in_list.h"
#include "op.h"

#ifndef		PARSING_H_
# define	PARSING_H_

# define	FOUNDED			0
# define	NOT_A_PARAMETER_LINE	1
# define	INVALID_LINE		-1
# define	NAME_ERR		-1
# define	COMMENT_ERR		-1
# define	PARAMETER_ERR		-1
# define	EXTEND_ERR		-1
# define	DIRECTIVE_ERR		-1
# define	LABEL_ERR		-1
# define	INSTRUCT_ERR		-1
# define	ARG_NB_ERR		-1
# define	REG_ERR			-1
# define	UNFOUNDED		-1

# define	NAME_ERR_STR		"Invalid .name declaration line "
# define	NAME_UNFOUNDED		".name unfouded, usage .name 'string'\n"
# define	NAME_NOT_ENDED		"name of champion unterminated\n"
# define	NAME_ERR_SIZE		"Size of name too large (name > 128)\n"

# define	COMMENT_ERR_STR		"Invalid .comment declaration line "
# define	COMMENT_UNFOUNDED	".comment unfounded, => .comment 'string'\n"
# define	COMMENT_NOT_ENDED	"comment of champion unterminated\n"
# define	COMMENT_ERR_SIZE	"Size comment too large (comment > 2048)\n"

# define	EXTEND_UNFOUNDED	".extend line unfouded\n"
# define	UNKNOWN_DIRECTIVE	"unknown directive\n"

# define	LABEL_NAME_ERR		"Label invalid declaration\n"
# define	LABEL_NOT_FOUNDED	"Label not founded\n"
# define	INSTRUCT_NAME_ERR	"Name of instruct invalid\n"
# define	ARG_ERR_STR		"Number of arguments invalid\n"
# define	REG_ERR_STR		"Invalid register\n"
# define	SYNTAX_STR_ERR		"Syntax error in argument\n"
# define	DIRECT_ERR_STR		"Syntax error in Direct arg\n"
# define	INDIRECT_ERR_STR	"Syntax error in indirect arg\n"

# define	NB_ARG_ERR		"Number of arguments incorrect\n"
# define	ARG_ERR			"Incorrect Types of arguments\n"
# define	LABEL_ERR2		"Same label name define twice or more\n"
# define	WARN_EXTEND		".extend not managed, careful with syntax\n"

struct s_directive
{
  char		*directive;
};

typedef struct s_directive t_directive;

#endif			/* !PARSING_H_ */

##
## Makefile for Corewar in /home/rajkou_p//afs/public/gp/rajkou_p
## 
## Made by philippe rajkoumar
## Login   <rajkou_p@epitech.net>
## 
## Started on  Sun Dec 18 16:43:52 2011 philippe rajkoumar
## Last update Sun Dec 18 16:57:29 2011 philippe rajkoumar
##

DIR_ASM	=	./asm/

all:		
		(cd $(DIR_ASM) && make)

clean:		
		(cd $(DIR_ASM) && make clean)

fclean:		clean
		(cd $(DIR_ASM) && make fclean)

re:		fclean all
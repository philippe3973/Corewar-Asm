/*
** my.h for libmy in /home/rajkou_p//afs/rendu/include
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Fri Oct 14 10:15:48 2011 philippe rajkoumar
** Last update Sun Dec 18 16:10:57 2011 philippe rajkoumar
*/

#ifndef			MY_H_

# define		MY_H_

int			my_getnbr(char *str);
unsigned	int	my_getnbr_unsigned(char *str);
int			my_isneg(int n);
void			my_putchar(char c);
void			my_put_nbr(int nb);
void			my_putstr(char *str);
char			*my_revstr(char *str);
int			my_str_isalpha(char *str);
int			my_str_isnum(char *str);
int			my_strlen(const char *str);
int			my_strcmp(char *s1, char *s2);
int			my_strncmp(char *s1, char *s2, int n);
int			my_swap(int *a, int *b);
void			my_strcpy(char *dest, char *src);
char			*my_strncpy(char *dest, char *src, int n);
char			*my_strdup(char *str);
void			my_strcat(char *dest, char *src);
int			my_tab_len(char **tab);

char			condition(char  i);
char			count_word(char *str);
char			**my_str_to_wordtab(char *str);
int			my_show_wordtab(char **tab);

int			put_stderr(const char *string_error);
void			free_tab(char **tab);
int			my_errno(char *string_error);

char			*epur_str(char *str);
int			is_char_exist_in_str(char *str, char c);

#endif		/* !MY_H_ */

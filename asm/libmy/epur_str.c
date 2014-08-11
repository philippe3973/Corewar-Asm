/*
** epur_str.c for corewar in /u/all/rajkou_p/public/gp/plum_s
** 
** Made by stanislas plum
** Login   <plum_s@epitech.net>
** 
** Started on  Fri Dec 16 11:14:51 2011 stanislas plum
** Last update Fri Dec 16 14:58:55 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "my.h"
#include "xfunc.h"

char			*epur_str(char *str)
{
  int			cnt;
  int			cnt_end;
  char			*dest;
  int			i;

  cnt_end = my_strlen(str) - 1;
  cnt = 0;
  i = 0;
  dest = xmalloc(sizeof(char *) * my_strlen(str) + 1);
  while (str[cnt_end] == ' ' || str[cnt_end] == '\t')
    cnt_end--;
  while (str[cnt] == ' ' || str[cnt] == '\t')
    cnt++;
  while (cnt <= cnt_end)
    {
      dest[i] = str[cnt];
      i++;
      cnt++;
    }
  dest[i] = '\0';
  free(str);
  return (dest);
}

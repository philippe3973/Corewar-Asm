/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/rajkou_p/
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Thu Oct 13 21:16:50 2011 philippe rajkoumar
** Last update Wed Dec  7 11:20:22 2011 philippe rajkoumar
*/

#include	<stdlib.h>
#include	"xfunc.h"

char		condition(char  i)
{
  return !(i == ' ' || i == '\n' || i == '\0' || i == '\t' || i == ',');
}

char		count_word(char *str)
{
  int		l;
  int		j;
  int		wordcomp;

  l = 0;
  j = 0;
  wordcomp = 0;
  while (str[l] != '\0')
    {
      while (str[l] && !condition(str[l]))
	l++;
      j = l;
      while (str[l] && condition(str[l]))
	l++;
      if (l != j)
        wordcomp = wordcomp + 1;
    }
  return (wordcomp);
}

char		**my_str_to_wordtab(char *str)
{
  int		l;
  int		k;
  int		nbword;
  int		r;
  char		**tab;

  l = 0;
  k = 0;
  r = 0;
  nbword = count_word(str);
  tab = (char **)xmalloc(sizeof(*tab) * (nbword + 1));
  while (r < nbword)
    {
      while (str[l] && !condition(str[l]))
	l = l + 1;
      k = l;
      while (str[l] && condition(str[l]))
	l = l + 1;
      tab[r] = (char *)xmalloc(sizeof(**tab) * ((l - k) + 1));
      my_strncpy(tab[r], &str[k], (l - k));
      tab[r][l - k] = '\0';
      r = r + 1;
    }
  tab[r] = NULL;
  return (tab);
}

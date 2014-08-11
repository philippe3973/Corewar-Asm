/*
** convert_param_to_hexa.c for corewar in /u/all/rajkou_p/public/gp/plum_s
** 
** Made by stanislas plum
** Login   <plum_s@epitech.net>
** 
** Started on  Thu Dec 15 10:37:18 2011 stanislas plum
** Last update Sun Dec 18 10:55:58 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include "file_in_list.h"
#include "my.h"
#include "xfunc.h"
#include "asm.h"

static int			g_cnt_bin = 0;

static int			reconversion(char *tab)
{
  int				x;
  int				deci;

  x = 0;
  deci = 0;
  while (tab[x])
    {
      if (tab[x] == '1')
        deci = deci * 2 + 1;
      else if (tab[x] == '0')
        deci *= 2;
      x++;
    }
  return (deci);
}

static char			*complete_bin_str(char *bin)
{
  int				i;

  i = my_strlen(bin);
  bin[8] = '\0';
  while (i < 8)
    {
      bin[i] = '0';
      i++;
    }
  g_cnt_bin = 0;
  return (bin);
}

static char		*set_type_in_str_bin(int *tab, int cnt_tab, char *bin)
{
  if (tab[cnt_tab] == 1)
    {
      bin[g_cnt_bin] = '0';
      bin[g_cnt_bin + 1] = '1';
      bin[g_cnt_bin + 2] = '\0';

    }
  else if (tab[cnt_tab] == 2)
    {
      bin[g_cnt_bin] = '1';
      bin[g_cnt_bin + 1] = '0';
      bin[g_cnt_bin + 2] = '\0';
    }
  else if (tab[cnt_tab] == 4)
    {
      bin[g_cnt_bin] = '1';
      bin[g_cnt_bin + 1] = '1';
      bin[g_cnt_bin + 2] = '\0';
    }
  g_cnt_bin = g_cnt_bin + 2;
  return (bin);
}

static int		convert_param_to_deci(int *tab)
{
  int			cnt_tab;
  char			*bin;
  int			nb_deci;

  bin = xmalloc(sizeof(*bin) * (8 + 1));
  cnt_tab = 0;
  while (tab[cnt_tab] != -1)
    {
      bin = set_type_in_str_bin(tab, cnt_tab, bin);
      cnt_tab++;
    }
  bin = complete_bin_str(bin);
  nb_deci = reconversion(bin);
  free(bin);
  return (nb_deci);
}

int			set_oct_describe(t_list *list)
{
  t_list		*tmp;

  tmp = list;
  while (tmp->next)
    {
      if (tmp->is_instruct_line && tmp->arg && (tmp->oct_instruct != 0 &&
						tmp->oct_instruct != 8 && tmp->oct_instruct !=
						11 && tmp->oct_instruct != 15))
	tmp->oct_describe = convert_param_to_deci(tmp->associated_types);
      tmp = tmp->next;
    }
  return (OK);
}

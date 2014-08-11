/*
** replace_ext.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Tue Dec  6 10:06:45 2011 flavien masseube
** Last update Sun Dec 18 16:36:43 2011 philippe rajkoumar
*/

#include <stdlib.h>
#include <unistd.h>
#include "creat_file.h"
#include "my.h"
#include "xfunc.h"

char			*concat_name(char *str, char *ext)
{
  char			*file_name;
  int			pos_x;
  int			pos_y;
  int			end;

  pos_x = 0;
  end = my_strlen(str);
  pos_y = 0;
  file_name = xmalloc(sizeof(*file_name) *
		      (my_strlen(ext) + my_strlen(str) - 2 + 1));
  while (str[end] != '.')
    end--;
  while (pos_x < end)
    file_name[pos_y++] = str[pos_x++];
  pos_x = 0;
  while (ext[pos_x])
    file_name[pos_y++] = ext[pos_x++];
  file_name[pos_y] = '\0';
  return (file_name);
}

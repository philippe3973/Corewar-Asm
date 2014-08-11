/*
** change_extension.c for  in /home/masseu_f//Korwar/creat_file/src
** 
** Made by flavien masseube
** Login   <masseu_f@epitech.net>
** 
** Started on  Tue Dec  6 10:11:23 2011 flavien masseube
** Last update Tue Dec  6 11:57:19 2011 flavien masseube
*/

#include "creat_file.h"

char    *change_extension(char *dest, char *src)
{
  int   pos_x;
  int   pos_y;

  pos_x = 0;
  pos_y= 0;
  while (dest[pos_x] != '.')
    pos_x++;
  while (src[pos_y] != '\0')
    {
      dest[pos_x] = src[pos_y];
      pos_x++;
      pos_y++;
    }
  return (dest);
}

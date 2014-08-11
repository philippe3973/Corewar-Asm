/*
** stock_file.c for asm in /home/rajkou_p//afs/public/gp/rajkou_p/backup_5_12:15:38/sources
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Dec  5 16:49:04 2011 philippe rajkoumar
** Last update Sat Dec 17 20:04:08 2011 philippe rajkoumar
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "my.h"
#include "xfunc.h"
#include "manage_input_file.h"

static int    buffer_cnt = BUFFER_SIZE;
static int    ret_read = 1;

char            *get_next_line(const int fd)
{
  static char   buffer[BUFFER_SIZE];
  int           str_cnt;
  char          *dest;

  str_cnt = 0;
  dest = NULL;
  if (buffer_cnt >= (BUFFER_SIZE - 1))
    {
      buffer_cnt = 0;
      ret_read = xread(fd, buffer, BUFFER_SIZE - 1);
      buffer[ret_read] = '\0';
    }
  if (buffer_cnt < BUFFER_SIZE && buffer[buffer_cnt])
    {
      dest = xmalloc(sizeof(*dest) * LINE_SIZE + 1);
      while (buffer[buffer_cnt] != '\n' && buffer[buffer_cnt])
        dest[str_cnt++] = buffer[buffer_cnt++];
      dest[str_cnt] = '\0';
      if (buffer[buffer_cnt])
        buffer_cnt++;
    }
  return (dest);
}

char			**stock_file(char *file_name)
{
  int			file_descriptor;
  char			**file_in_tab;
  int			index;

  index = 0;
  file_in_tab = xmalloc(sizeof(*file_in_tab) *
			(nb_line_in_file(file_name) + 1));
  buffer_cnt = BUFFER_SIZE;
  ret_read = 1;
  file_descriptor = xopen(file_name, O_RDONLY);
   while ((file_in_tab[index] = get_next_line(file_descriptor)))
    index++;
  file_in_tab[index] = NULL;
  close(file_descriptor);
  return (file_in_tab);
}

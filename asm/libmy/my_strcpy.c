/*
** my_strcpy.c for my_strcpy in /home/rajkou_p//afs/rendu/piscine/Jour_06/ex_01
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Oct 10 09:49:40 2011 philippe rajkoumar
** Last update Sun Nov  6 13:56:38 2011 philippe rajkoumar
*/

void		my_strcpy(char *dest, char *src)
{
  int		i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
}

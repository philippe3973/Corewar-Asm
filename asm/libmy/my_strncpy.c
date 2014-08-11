/*
** my_strncpy.c for my_strncpy in /home/rajkou_p//afs/rendu/piscine/Jour_06/ex_02
** 
** Made by philippe rajkoumar
** Login   <rajkou_p@epitech.net>
** 
** Started on  Mon Oct 10 09:55:18 2011 philippe rajkoumar
** Last update Tue Oct 11 17:22:25 2011 philippe rajkoumar
*/

char		*my_strncpy(char *dest, char *src, int n)
{
  int		i;
  int		len;

  i = 0;
  len = 0;
  while (src[len])
    len++;
  if (n > len)
    while (i < len)
      {
	dest[i] = src[i];
	i++;
	dest[len] = '\0';
      }
  else
    while (i < n)
      {
	dest[i] = src[i];
	i++;
	dest[n] = '\0';
      }
  return (dest);
}

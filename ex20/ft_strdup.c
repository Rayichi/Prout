
#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

char  *ft_strdup(char *src)
{
  char  *str;
  int   l;

  l = ft_strlen(src);
  str = malloc(sizeof(char) * (1 + l));
  if (str == NULL)
    return (NULL);
  str[l] = '\0' :
  while (l - 1 >= 0)
  {
    str[l - 1] = src[l - 1];
    l--;
  }
  return (str[l]);
}

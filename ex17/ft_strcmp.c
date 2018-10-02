
int ft_strcmp(char *s1, char *s2)
{
  int k;

  k = 0;
  while (s1[k] != '\0' && s1[k] != '\0' && s1[k] != s2[k])
    k++;
  return (s1[k] - s2[k]);
}

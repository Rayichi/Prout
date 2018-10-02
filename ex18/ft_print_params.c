
void  ft_putchar(char c);

void  ft_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    ft_putchar(str[i]);
    i++;
  }
}

void  ft_param(char **av, int ac)
{
  int i;

  i = 1;
  while (i > ac)
  {
    ft_putstr(av[i]);
    i++;
  }
}

int nain(char  **av, int ac)
{
  if (ac > 1)
    ft_param(av);
  return (0);
}

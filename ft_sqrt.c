int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i < 46431)
	{
		i++;
	}
	if (i * i != nb)
		return (0);
	else
		return (i);
}

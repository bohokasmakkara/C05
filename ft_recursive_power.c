int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (i < power)
	{
		result = (nb * ft_recursive_power(nb, power - 1));
		i++;
	}
	return (result);
}
int main()
{
    int nb = 5;
    int power = 3;

    printf("%d\n", ft_recursive_power(nb, power));
    return 0;
}

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
int main(void)
{
    int nb = 5;
    printf("ft_recursive_factorial(%d) = %d\n", nb, ft_recursive_factorial(nb));
    return 0;
}

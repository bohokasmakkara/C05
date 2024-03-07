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
#include <stdio.h>
int main(void)
{
    int number = 2147395600;  // You can change this to any non-negative number
    int result = ft_sqrt(number);

    if (result == 0)
    {
        printf("The square root is irrational or undefined.\n");
    }
    else
    {
        printf("The square root of %d is %d\n", number, result);
    }

    return 0;
}

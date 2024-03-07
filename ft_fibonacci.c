int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
#include <stdio.h>
int main(void)
{
    int n = 10;  // You can change this to any non-negative integer
    printf("Fibonacci element at index %d: %d\n", n, ft_fibonacci(n));

    return 0;
}

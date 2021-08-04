int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb > 1)
	{
		fact *= (nb - 1);
		nb--;
	}
	if (!(nb >= 0))
	{		
		return (0);
	}
	return (fact);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(-2));
	return (0);
}
*/

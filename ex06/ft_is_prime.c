int	ft_is_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int i;
	
	i = 0;
	while (i < 100)
	{
	   	if (ft_is_prime(i))
			printf("%d\n", i);
		i++;
	}
	return (0);
}
*/

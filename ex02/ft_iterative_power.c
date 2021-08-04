int	ft_iterative_power(int	nb, int power)
{
	int	res;

	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*
#include <stdio.h>
int main(void)
{
	int	nb = 12;
	int	power = 12;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
*/

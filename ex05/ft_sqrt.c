int	ft_sqrt(int	nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{

	printf("%d", ft_sqrt(2147395600));
	printf("%d", ft_sqrt(0));
	printf("%d", ft_sqrt(-2));
	printf("%d", ft_sqrt(1));
	printf("%d", ft_sqrt(25));
		return (0);
}
*/

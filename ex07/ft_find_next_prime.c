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

int	ft_find_next_prime(int	nb)
{
	if (ft_is_prime(nb))
		return (nb);
	if (nb <= 2)
		return (2);
	if ((nb % 2) == 0)
		nb++;
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb += 2;
	}
	return (-1);
}
/*
#include <stdio.h>
#include <libc.h>
int	main(int ac, char **av)
{
	if (ac ==2)
		printf("%d", ft_find_next_prime(atoi(av[1])));
		return (0);
}
*/

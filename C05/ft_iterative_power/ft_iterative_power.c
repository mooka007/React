#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int res;
	res = 1;

	if(power < 0)
		return 0;
	if(power == 0)
		return 1;

	while(power)
	{
		res *= nb;
		power--;
	}
	return res;
}

int	main(void)
{
	printf("%d", ft_iterative_power(5, 6));
	return 0;
}


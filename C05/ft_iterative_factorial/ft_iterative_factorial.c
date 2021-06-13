#include <unistd.h>
#include <stdio.h>


int	ft_iterative_factorial(int nb)
{
	int i = 1;
	int res = 1;

	if(nb < 0 || nb > 12)
		return 0;
	
	while(i <= nb)
	{
		res = res * i;
		i++;
	}
	return res;
}

int	main()
{
	int i = 12;

	printf("%d", ft_iterative_factorial(i));
	return 0;
}

#include <stdio.h>

int	ft_is_prime(int nb)
{
	if (nb < 0 )
		return 0;
	if( nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return 1;
	if(nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0 )
		return 0;
	return 1;
}
int	main(void)
{
	printf("%d", ft_is_prime(67));
	return 9;
}

// Prime Number are divisiblie only by the number 1 or itself :3

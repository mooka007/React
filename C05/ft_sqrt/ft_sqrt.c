#include <stdio.h>

int	ft_sqrt( int nb)
{
	int i = 0;
	while ( i * i < nb )
	{
		i++;
	}
	if ( i * i == nb )
		return i;
}

int	main()
{
	printf("%d", ft_sqrt(49));
	return 0;
}

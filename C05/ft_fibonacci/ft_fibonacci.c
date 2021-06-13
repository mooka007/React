#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	if(index < 0)
		return -1;
	if (index == 0)
		return 0;
	if ( index == 1)
		return 1;
	if (index > 46)
		return 0;
	return ft_fibonacci(index - 1) + ft_fibonacci( index - 2);
}
int	main()
{
	printf("%d", ft_fibonacci(9));
	return 0;
}

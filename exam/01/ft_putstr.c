#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	i = 0;

	while(*str)
		write(1, str++, 1);
	
}

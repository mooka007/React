#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while( str[i++] != '\0')
	return i;
}

int	main()
{
	printf("%d", ft_strlen("hi there"));
	return 0;
}


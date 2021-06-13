#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int i = 0;
	while(str[i] != '\0' )
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			return 0;
		i++;
	}
	return 1;
}
int	main()
{
	char str[] = "564lk";

	printf("%d", ft_str_is_numeric(str));
	return 0;
}

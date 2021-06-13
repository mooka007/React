#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z') || str[i] >= 'a' && str[i] <= 'z'))
			
			return 0;
			i++;
		
	}
		return 1;
}
int	main()
{
	char str[]="abcd5ll88";
	printf("%d", ft_str_is_alpha(str));
	return 0;
}

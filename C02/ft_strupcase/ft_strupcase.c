#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(Str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++
	}
	return str;
}
int main ()
{
	char str[] = " ";
	printf("%s", ft_strupcase(str));
	return 0;
}
